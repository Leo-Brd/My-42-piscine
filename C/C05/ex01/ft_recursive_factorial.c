/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:44:39 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 17:05:18 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	fact;
	int	fact_2;
	int	fact_3;

	fact = ft_recursive_factorial(5);
	fact_2 = ft_recursive_factorial(-10);
	fact_3 = ft_recursive_factorial(0);
	printf("%d\n", fact);
	printf("%d\n", fact_2);
	printf("%d", fact_3);
}
*/
