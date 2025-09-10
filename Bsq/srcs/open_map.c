/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:10:06 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 20:06:39 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

// THE FUNCTION FOR OPENING A MAP AND PUT IT IN A STRS
void	open_map(char *filename, char **map)
{
	char	*buffer;
	int		fd;
	int		size;

	size = file_len(filename);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		error_msg();
	buffer = malloc((size * sizeof(char)) + 1);
	if (read(fd, buffer, size) == -1)
		error_msg();
	if (close(fd) == -1)
		error_msg();
	ft_putstr(buffer);
	buffer_in_strs(buffer, map);
	return ;
	free(buffer);
}

// FUNCTION WHAT PUT THE BUFFER IN THE STRS
void	buffer_in_strs(char *buffer, char **map)
{
	int					i;
	int					j;
	int					x;
	int					size;
	unsigned long int	first_line_size;

	i = -1;
	j = -1;
	x = 0;
	first_line_size = 0;
	size = strs_alloc(map, buffer, &first_line_size);
	map[0] = malloc((first_line_size + 1) * sizeof(char));
	while (buffer[++i])
	{
		map[x][++j] = buffer[i];
		if (buffer[i] == '\n')
		{
			map[x++][j + 1] = '\0';
			if (buffer[i + 1])
				map[x] = malloc((size + 1) * sizeof(char));
			else
				break ;
			j = -1;
		}
	}
}

// FUNCTION WHAT MANAGE THE MEMORY ALLOCATION FOR THE STRS
int	strs_alloc(char **map, char *buffer, unsigned long int *first_line_size)
{
	int	nb_lines;
	int	size;

	count_lines(buffer, &nb_lines);
	size = lines_length(buffer, first_line_size);
	if (size == -1)
		error_msg();
	map = malloc((nb_lines + 1) * sizeof(char *));
	return (size);
}

// FUNCTION WHAT COUNT THE SIZE OF ALL THE LINES IN THE BUFFER
int	lines_length(char *buffer, unsigned long int *first_line_size)
{
	int	i;
	int	j;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	*first_line_size = i;
	j = 0;
	i++;
	while (buffer[i + j])
	{
		if (buffer[i + j] == '\n')
		{
			return (j);
		}
		j++;
	}
	return (-1);
}

// FUNCTION WHAT RETURN THE NUMBER OF BUFFER LINES
void	count_lines(char *buffer, int *nb_lines)
{
	int	i;

	i = 0;
	*nb_lines = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			*nb_lines = *nb_lines + 1;
		i++;
	}
	*nb_lines = *nb_lines - 1;
}
