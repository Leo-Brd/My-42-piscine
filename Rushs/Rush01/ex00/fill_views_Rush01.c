/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_views_Rush01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakozhev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:49:31 by vakozhev          #+#    #+#             */
/*   Updated: 2024/07/14 15:49:57 by dernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*Fill top, then fill bottom, fill left, fill right*/

void	fill_one(int a, int b, int square[6][6], int views[4][4])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		square[a][i] = views[b][j];
		i++;
		j++;
	}
}

void	fill_two(int a, int b, int square[6][6], int views[4][4])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		square[i][a] = views[b][j];
		i++;
		j++;
	}
}

void	fill_views(int views[4][4], int square[6][6])
{
	fill_one(0, 0, square, views);
	fill_one(5, 1, square, views);
	fill_two(0, 2, square, views);
	fill_two(5, 3, square, views);
}
