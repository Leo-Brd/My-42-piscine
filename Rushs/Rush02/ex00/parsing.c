/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:15:44 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/21 20:42:43 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// WE OPEN THE DICTIONARY, PUT IT IN A BUFFER AND CALL OUR FUNCTION SEARCH_NAME
char	*ft_parsing(char *filename, char *nb)
{
	int		fd;
	char	*buffer;
	int		size;
	char	*name;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 12);
		exit(1);
	}
	buffer = malloc(701);
	size = read(fd, buffer, 700);
	buffer[size] = '\0';
	name = malloc(100);
	name = search_name(buffer, nb);
	if (close(fd) < 0)
	{
		write(1, "Dict Error\n", 12);
		exit(1);
	}
	free(buffer);
	return (name);
}

// WE SEARCH THE LINE OF THE BUFFER WHERE THE NUMBER IS
int	line_search(char *buffer, char *nb)
{
	int	i;
	int	buff_len;
	int	nb_len;
	int	j;

	i = 0;
	buff_len = ft_tablen(buffer);
	nb_len = ft_tablen(nb);
	while (i < buff_len)
	{
		j = 0;
		while (buffer[i] == nb[j])
		{
			j++;
			i++;
		}
		if (j == nb_len)
			return (i);
		while (buffer[i] != '\n')
			i++;
		i++;
	}
	return (0);
}

// WE SEARCH THE ENGLISH NAME IN THE LINE WHERE WE FOUND THE NUMBER
char	*recup_name(int i, char *buffer)
{
	int		j;
	int		x;
	char	*name;

	j = 0;
	x = 0;
	name = malloc(100);
	while ((buffer[i + j] == ' ') || (buffer[i + j] == ':'))
		j++;
	while (buffer[i + j] != '\n')
	{
		name[x] = buffer[i + j];
		j++;
		x++;
	}
	return (name);
}

// WE CALL THE FUNCTIONS FOR SEARCHING THE ENGLISH NAME OF OUR NUMBER
char	*search_name(char *buffer, char *nb)
{
	int	result;

	result = line_search(buffer, nb);
	if (result > 0)
		return (recup_name(result, buffer));
	else
	{
		write(1, "Dict Error\n", 12);
		exit (1);
	}
}
