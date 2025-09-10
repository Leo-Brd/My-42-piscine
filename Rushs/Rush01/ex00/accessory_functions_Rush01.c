/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessory_functions_Rush01.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakozhev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:55:30 by vakozhev          #+#    #+#             */
/*   Updated: 2024/07/14 19:10:45 by dernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int number);

void	display_square(int square[6][6], int size)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			ft_putchar(square[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putchar(int number)
{
	char	c;

	c = number + '0';
	write(1, &c, 1);
	write(1, " ", 1);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
