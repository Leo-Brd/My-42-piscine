/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:15:30 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 15:02:42 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		if (nb == (i * i))
			return (i);
		i--;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(1));
	printf("%d", ft_sqrt(-10));
}
*/
