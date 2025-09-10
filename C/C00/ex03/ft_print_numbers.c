/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:25:24 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/04 17:19:30 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c_number;

	c_number = '0';
	while (c_number <= '9')
	{
		write(1, &c_number, 1);
		c_number++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/
