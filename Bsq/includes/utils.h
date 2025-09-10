/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:03:16 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 17:59:11 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

//STR_UTILS_C
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		is_printable(char car);
void	ft_putstrs(char **strs);

//INT_UTILS_C
void	ft_putnbr(int nb);
void	ft_ul_putnbr(unsigned long int nb);
int		ft_atoi(char *str);

//ALLOC_UTILS_C
void	free_strs(char **tab);
void	free_ui_tab(unsigned int **tab);

//OTHER_UTILS_C
int		file_len(char *filename);
void	print_map(char **map);

#endif
