/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:24:09 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 17:02:13 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	i = nb - 1;
	while (i > 0)
	{
		result *= i;
		i --;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	fact;
	int	fact_2;
	int	fact_3;

	fact = ft_iterative_factorial(5);
	fact_2 = ft_iterative_factorial(-10);
	fact_3 = ft_iterative_factorial(0);
	printf("%d\n", fact);
	printf("%d\n", fact_2);
	printf("%d", fact_3);
}
*/
