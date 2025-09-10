/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:04:21 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/21 20:55:03 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// MAIN FUNCTION WHAT MANAGE OUR ARGUMENTS AND CALL OUR FUNCTIONS
int	main(int argc, char **argv)
{
	char	*nb;
	char	*dict;

	dict = NULL;
	nb = NULL;
	if (argc == 2)
		nb = argv[1];
	else if (argc == 3)
	{
		nb = argv[2];
		dict = argv[1];
	}
	else
	{
		write (1, "Error\n", 6);
		return (0);
	}
	if (nb < 0)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	functions(dict, nb);
	return (0);
}

// OUR FUNCTIONS TESTS (PARSING AND SEPARATION)
void	functions(char *dict, char *nb)
{
	char	**separate_nb;
	int		i;
	int		j;

	separate_nb = malloc(1000);
	separate(nb, separate_nb);
	i = 0;
	while (separate_nb[i] != 0)
	{
		j = 0;
		while (separate_nb[i][j] != '\0')
		{
			write (1, &separate_nb[i][j], 1);
			j++;
		}
		write (1, " ", 1);
		i++;
	}
	ft_putstr(ft_parsing(dict, nb));
	free_tab_in_tab(separate_nb);
}
