/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:17:41 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 14:27:22 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	i = 0;
	pow = 1;
	while (i < power)
	{
		pow = pow * nb;
		i++;
	}
	return (pow);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(5, -10));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d", ft_iterative_power(0, 0));
}
*/
