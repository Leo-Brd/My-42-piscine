/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:17:33 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/04 17:17:26 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c_alpha;

	c_alpha = 'z';
	while (c_alpha >= 'a')
	{
		write(1, &c_alpha, 1);
		c_alpha --;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
