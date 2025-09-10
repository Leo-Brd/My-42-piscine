/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:08:08 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/23 17:13:56 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

// THE MAP NEED TO HAVE CORRECT PARAMS
int	verif_first_line(char **map)
{
	int	i;
	int	j;

	i = ft_strlen(map[0]) - 1;
	if (map[0][i] != '\n')
		return (1);
	j = i - 4;
	while (i > j)
	{
		if (is_printable(map[0][i]) == 0)
			return (1);
		i--;
	}
	if ((map[0][i + 1] == map[0][i + 2])
		|| (map[0][i + 2] == map[0][i + 3])
		|| (map[0][i + 1] == map[0][i + 3]))
		return (1);
	while (i > 0)
	{
		if ((map[0][i] < '0') || (map[0][i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

// THE MAP NEED TO HAVE LINES WITH THE SAME LENGTH
int	verif_line_length(char **map)
{
	int	i;
	int	j;
	int	len;

	i = 2;
	j = 0;
	len = ft_strlen(map[1]);
	while (map[i++])
	{
		j = 0;
		while (map[i][j])
		{
			j++;
		}
		if ((j != len) || (map[i][j] != '\n'))
			return (1);
	}
	return (0);
}
