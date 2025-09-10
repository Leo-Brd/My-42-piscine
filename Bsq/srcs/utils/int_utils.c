/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:01:50 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 14:40:44 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

// FUNCTION WHAT PRINT A NUMBER
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// FUNCTION WHAT PRINT AN UNSIGNED LONG INT
void	ft_ul_putnbr(unsigned long int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// FUNCTION WHAT CONVERT A STRING IN INT
int	ft_atoi(char *str)
{
	int	value;
	int	i;
	int	sign;

	value = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			value = (value * 10) + (str[i] - '0');
		else if (str[i] == '-' || str[i] == '+')
		{
			if (value != 0)
				break ;
			if (str[i] == '-')
				sign *= -1;
		}
		else
			break ;
		i++;
	}
	return (sign * value);
}
