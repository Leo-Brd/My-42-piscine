/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:04:16 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 17:15:52 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

// FUNCTION WHAT RETURN THE LENGTH OF AN OPENEND FILE
int	file_len(char *filename)
{
	char	cursor[1];
	int		i;
	int		fd;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write (2, "map error", 10);
		exit (1);
	}
	while (read(fd, cursor, 1))
		i ++;
	if (close(fd) == -1)
	{
		write (2, "map error", 10);
		exit (1);
	}
	return (i);
}

// FUNCTION WHAT PRINT THE MAP WITHOUT THE PARAMS
void	print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[++i])
	{
		j = 0;
		while (map[i][j])
		{
			ft_putchar(map[i][j]);
			j++;
		}
	}
}
