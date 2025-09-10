/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:42:07 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/04 19:03:04 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i_indice;

	i_indice = 0;
	while (str[i_indice] != '\0')
	{
		write (1, &str[i_indice], 1);
		i_indice++;
	}
}

/*
int	main(void)
{
	char	str[7] = "bonsoir";
	
	ft_putstr(str);
}
*/
