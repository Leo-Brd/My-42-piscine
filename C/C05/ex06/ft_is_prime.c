/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:00:08 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/19 12:45:02 by lbordet          ###   ########.fr       */
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

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(13));
	// est premier
	printf("%d", ft_is_prime(76));
	// n'est pas premier
}
*/
