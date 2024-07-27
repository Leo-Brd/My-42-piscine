/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_square.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:04:20 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 20:21:37 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVE_SQUARE_H
# define RESOLVE_SQUARE_H

typedef struct s_square
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	len;
}	t_square;

// RESOLVE_SQUARE_H
void			resolve_square(char **map,
					unsigned int size, char *params);
unsigned int	ft_count_obstacle(char **map,
					unsigned int size, char obstacle);
void			malloc_co_tab(unsigned int i, unsigned int **tab, int x, int y);
unsigned int	**ft_find_obstacle(char **map,
					unsigned int size, char obstacle);
char			**ft_draw_sqr(char **map, t_square sqr, char c);

//SQUARE_H
int				is_sqr_valid(t_square sqr,
					unsigned int map_len, unsigned int **obstacle_list);
t_square		max_len_of_sqr(int x, int y,
					unsigned int map_len, unsigned int **obstacle_list);
t_square		max_map_sqr(unsigned int **obstacle_list, unsigned int map_len);

#endif
