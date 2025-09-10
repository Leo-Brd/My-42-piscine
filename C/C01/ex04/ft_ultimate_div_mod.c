/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:26:23 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/04 15:40:21 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i_temp_1;
	int	i_temp_2;

	i_temp_1 = *a;
	i_temp_2 = *b;
	*a = i_temp_1 / i_temp_2;
	*b = i_temp_1 % i_temp_2;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 7;
	b = 2;
	div = &a;
	mod = &b;
	ft_ultimate_div_mod(div, mod);
	printf("%d , %d", a, b);
}
*/
