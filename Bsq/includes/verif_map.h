/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:02:09 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 17:23:04 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIF_MAP_H
# define VERIF_MAP_H

// VERIF_MAP_C
void	verif_map(char **map);
void	error_msg(void);

// VERIF_FUNCTIONS_C
int		verif_first_line(char **map);
int		verif_line_length(char **map);

#endif
