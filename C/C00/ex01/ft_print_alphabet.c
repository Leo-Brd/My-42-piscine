/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:09:04 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/04 17:14:25 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c_alpha;

	c_alpha = 'a';
	while (c_alpha <= 'z')
	{
		write(1, &c_alpha, 1);
		c_alpha ++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
