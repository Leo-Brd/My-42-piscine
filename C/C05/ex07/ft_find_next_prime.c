/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:21:50 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 15:07:54 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if ((nb == 0) || (nb == 1))
		return (0);
	while (i > 1)
	{
		if ((nb % i) == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(34));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d", ft_find_next_prime(17));
}
*/
