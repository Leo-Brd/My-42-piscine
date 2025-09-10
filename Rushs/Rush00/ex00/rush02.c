/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmouget <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:59:18 by lmouget           #+#    #+#             */
/*   Updated: 2024/07/06 16:02:40 by lmouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line02(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0)
			ft_putchar('A');
		else if (j == y - 1)
			ft_putchar('C');	
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush02(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_line02(x, y, i, j);
			i++;
		}
		if (x > 0)
		{
			ft_putchar('\n');
		}
		j++;
	}
}

