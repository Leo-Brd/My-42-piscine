/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:09:02 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 20:30:49 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "utils.h"
# include "resolve_square.h"
# include "verif_map.h"

// MAIN_C
void	resolve(char **map);

// SEARCH_PARAMS_C
void	search_params(char **map, unsigned int *size, char params[3]);
void	verif_params(char **map, char params[3]);

// OPEN_MAP_C
void	open_map(char *filename, char **map);
void	buffer_in_strs(char *buffer, char **map);
int		strs_alloc(char **map, char *buffer,
			unsigned long int *first_line_size);
int		lines_length(char *buffer, unsigned long int *first_line_size);
void	count_lines(char *buffer, int *nb_lines);

#endif
