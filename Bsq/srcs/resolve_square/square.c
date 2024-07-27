/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:27:04 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 19:27:09 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

int	is_sqr_valid(t_square sqr,
		unsigned int map_len, unsigned int **obstacle_list)
{
	int	i;

	i = -1;
	while (obstacle_list[++i])
		if (((sqr.x + sqr.len > obstacle_list[i][0])
			&& (sqr.y + sqr.len > obstacle_list[i][1]))
				|| ((sqr.x + sqr.len > map_len) ||
					(sqr.y + sqr.len > map_len)))
			return (0);
	return (1);
}

t_square	max_len_of_sqr(int x, int y, unsigned int map_len, \
					unsigned int **obstacle_list)
{
	t_square	sqr;

	sqr.x = x;
	sqr.y = y;
	sqr.len = 0;
	while (is_sqr_valid(sqr, map_len, obstacle_list))
		sqr.len++;
	sqr.len--;
	return (sqr);
}

t_square	max_map_sqr(unsigned int **obstacle_list, unsigned int map_len)
{
	t_square		max_sqr;
	t_square		current_sqr;
	unsigned int	x;
	unsigned int	y;

	y = -1;
	max_sqr.x = 0;
	max_sqr.y = 0;
	max_sqr.len = 0;
	while (++y <= map_len)
	{
		x = -1;
		while (++x <= map_len)
		{
			current_sqr = max_len_of_sqr(x, y, map_len, obstacle_list);
			if (current_sqr.len > max_sqr.len)
				max_sqr = current_sqr;
		}
	}
	return (max_sqr);
}
