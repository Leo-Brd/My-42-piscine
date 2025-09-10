/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:02:35 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 17:28:34 by lbordet          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len_arg;

	i = 1;
	j = 0;
	while (i < argc)
	{
		len_arg = ft_strlen(argv[i]);
		j = 0;
		while (j < len_arg)
		{
			write (1, &argv[i][j], 1);
			j ++;
		}
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
