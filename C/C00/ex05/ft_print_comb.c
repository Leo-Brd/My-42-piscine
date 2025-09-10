/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:36:23 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/05 10:22:22 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_numbers(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i_number_1;
	int	i_number_2;
	int	i_number_3;

	i_number_1 = '0';
	i_number_2 = i_number_1 + 1;
	i_number_3 = i_number_2 + 1;
	while (i_number_1 <= '7')
	{
		while (i_number_2 <= '8')
		{
			while (i_number_3 <= '9')
			{
				ft_show_numbers(i_number_1, i_number_2, i_number_3);
				i_number_3 ++;
			}
			i_number_2 ++;
			i_number_3 = i_number_2 + 1;
		}
		i_number_1 ++;
		i_number_2 = i_number_1;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
