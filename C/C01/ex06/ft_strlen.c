/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:05:19 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/06 12:49:59 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i_indice;

	i_indice = 0;
	while (str[i_indice])
	{
		i_indice++;
	}
	return (i_indice);
}

/*
int	main(void)
{
	char	str[8] = "bonsoir";
	char	nb;

	nb = ft_strlen(str) + '0';
	write (1, &nb, 1);
}
*/
