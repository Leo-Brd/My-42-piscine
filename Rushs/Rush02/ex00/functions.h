/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:53:11 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/21 20:51:13 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// MAIN FUNCTIONS
void	functions(char *dict, char *nb);

// UTILS FUNCTIONS
int		ft_tablen(char *tab);
void	free_tab_in_tab(char **tab);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

// PARSING FUNCTIONS
char	*search_name(char *buffer, char *nb);
int		ft_tablen(char *tab);
char	*ft_parsing(char *filename, char *nb);
int		line_search(char *buffer, char *nb);
char	*recup_name(int i, char *buffer);

// SEPARATOR FUNCTIONS
void	separate_3(char *nb, char **tab);
void	separate_2(char *nb, char **tab);
void	separate_1(char *nb, char **tab);
void	separate(char *nb, char **tab);

#endif
