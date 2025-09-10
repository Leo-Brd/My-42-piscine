/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:28:56 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 20:30:22 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

// WE SEARCH THE PARAMS AT THE TOP OF THE MAP
void	search_params(char **map, unsigned int *size, char params[3])
{
	int		i;
	int		j;
	char	*number;

	i = ft_strlen(map[0]) - 2;
	params[2] = map[0][i];
	params[1] = map[0][i - 1];
	params[0] = map[0][i - 2];
	i = i - 3;
	number = malloc((i * sizeof(char)) + 1);
	j = 0;
	while (j < i)
	{
		number[j] = map[0][j];
		j++;
	}
	*size = ft_atoi(number);
	free(number);
	verif_params(map, params);
}

// WE VERIF THE PARAMS
void	verif_params(char **map, char params[3])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[++i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == params[0]
			|| map[i][j] == params[1]
			|| map[i][j] == params[2])
				;
			else
				error_msg();
			j++;
		}
	}
}
