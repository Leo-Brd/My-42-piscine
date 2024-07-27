/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:26:44 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 19:37:53 by nguez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

unsigned int	ft_count_obstacle(char **map, unsigned int size, char obstacle)
{
	unsigned int	count_obstacle;
	unsigned int	x;
	unsigned int	y;

	count_obstacle = 0;
	y = 1;
	while (y <= size)
	{
		x = 0;
		while (x <= size)
		{
			if (map[y][x] == obstacle)
				count_obstacle++;
			x++;
		}
		y++;
	}
	return (count_obstacle);
}

void	malloc_co_tab(unsigned int i, unsigned int **tab, int x, int y)
{
	tab[i] = malloc(2 * sizeof(unsigned int));
	tab[i][0] = x;
	tab[i][1] = y;
}

unsigned int	**ft_find_obstacle(char **map, unsigned int size, char obstacle)
{
	long int			x;
	unsigned int		y;
	unsigned int		**obstacle_list;
	unsigned int		obstacle_number;

	y = 0;
	obstacle_list = malloc(ft_count_obstacle(map, size, obstacle) \
			* sizeof(unsigned int *));
	obstacle_number = 0;
	while (++y <= size)
	{
		x = -1;
		while (++x <= size)
			if (map[y][x] == obstacle)
				malloc_co_tab(obstacle_number, obstacle_list, x, y);
	}
	return (obstacle_list);
}

char	**ft_draw_sqr(char **map, t_square sqr, char c)
{
	unsigned int	x;
	unsigned int	y;

	y = sqr.y -1;
	while (map[++y] && y <= sqr.len)
	{
		x = sqr.x -1;
		while (map[y][++x] && x <= sqr.len)
			map[y][x] = c;
	}
	return (map);
}

void	resolve_square(char **map, unsigned int size, char *params)
{
	unsigned int	**obstacle_list;
	t_square		sqr;

	obstacle_list = ft_find_obstacle(map, size, params[1]);
	sqr = max_map_sqr(obstacle_list, size);
	free_ui_tab(obstacle_list);
	ft_draw_sqr(map, sqr, params[2]);
}
