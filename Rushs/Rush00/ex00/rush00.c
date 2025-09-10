/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgondran <tgondran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:07:36 by tgondran          #+#    #+#             */
/*   Updated: 2024/07/06 15:23:21 by lmouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0 || j == y - 1)
			ft_putchar('o');
		else
			ft_putchar('|');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('-');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_line(x, y, i, j);
			i++;
		}
		if (x > 0)
		{
			ft_putchar('\n');
		}
		j++;
	}
}
