/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:18:18 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/23 20:03:21 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

void	verif_map(char **map)
{
	if (map)
	{
		if (!map[0][0])
			error_msg();
		else if (verif_first_line(map) == 1)
			error_msg();
		else if (verif_line_length(map) == 1)
			error_msg();
	}
	else
		error_msg();
}

void	error_msg(void)
{
	write (2, "map error\n", 10);
	exit (1);
}
