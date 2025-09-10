/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmouget <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:42:54 by lmouget           #+#    #+#             */
/*   Updated: 2024/07/06 15:57:30 by lmouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line01(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if ((i == 0 && j == 0) || ( i == x - 1 && j == y - 1))
			ft_putchar('/');
		else if ((i == 0 && j == y - 1) || (j == 0 && i == x - 1))
			ft_putchar('\\');	
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_line01(x, y, i, j);
			i++;
		}
		if (x > 0)
		{
			ft_putchar('\n');
		}
		j++;
	}
}

