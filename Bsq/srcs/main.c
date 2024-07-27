/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:46:42 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 20:33:36 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

// MAIN FUNCTION WHAT CALL THE FUNCTIONS AND RECUP THE ARG
int	main(int ac, char **av)
{
	char	*filename;
	char	**map;

	map = NULL;
	if (ac == 2)
		filename = av[1];
	else
	{
		write (1, "error", 10);
		exit (1);
	}
	open_map(filename, map);
	ft_putstrs(map);
	verif_map(map);
	resolve(map);
	free_strs(map);
}

// FUNCTION WHAT CALL THE RESOLVING FUNCTIONS
void	resolve(char **map)
{
	unsigned int	size;
	char			params[3];

	search_params(map, &size, params);
	resolve_square(map, size, params);
	print_map(map);
}
