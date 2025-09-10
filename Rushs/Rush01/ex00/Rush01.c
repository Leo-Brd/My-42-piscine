/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakozhev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:23:31 by vakozhev          #+#    #+#             */
/*   Updated: 2024/07/14 19:08:01 by dernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		verif_nb_bat(int square[6]);
int		swap(int *a, int *b);
int		check_column(int square[6][6]);
void	ft_putchar(int number);
void	display_square(int square[6][6], int size);
void	rush(int views[4][4]);
void	fill_views(int views[4][4], int square[6][6]);
void	verif_4(int square[6][6]);

void	rush(int views[4][4])
{
	int	i;
	int	j;
	int	square[6][6];

	i = 0;
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			square[i][j] = 0;
			j++;
		}
		i++;
	}
	fill_views(views, square);
	check_column(square);
	display_square(square, 6);
}

void	verif_4(int square[6][6])
{
	int	i;

	i = 0;
	if (square[1][0] == 4)
	{
		while (++i < 5)
			square[1][i] = i;
	}
	if (square[1][5] == 4)
	{
		i = 5;
		while (--i > 0)
			square[1][i] = i ;
	}
}

int	check_column(int square[6][6])
{
	int	i;
	int	max;
	int	test;

	test = -1;
	max = 1;
	i = 1;
	verif_4(square);
	while (++test < 7)
	{
		if (verif_nb_bat(square[1]) == 0)
		{
			square[1][i] += max;
			max ++;
			i++;
		}
		else
			swap(&square[1][1], &square[1][i - 1]);
	}
	return (0);
}

int	verif_nb_bat(int square[6])
{
	int	count_r;
	int	count_l;
	int	max;
	int	i;

	i = 0;
	count_r = 1;
	max = square[1];
	while (++i < 5)
		if (square[i] > max)
			count_r++;
	count_l = 1;
	max = square[4];
	i = 5;
	while (--i > 0)
	{
		if (square[i] > max)
			count_l++;
	}
	i = 0;
	if (count_r > square[0] || count_l > square[5])
		return (1);
	return (0);
}
