/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:45:32 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/21 20:48:13 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// WE SEARCH WHAT FUNCTION WE NEED TO CALL FOR THE SEPARATION
void	separate(char *nb, char **tab)
{
	int	nb_len;

	nb_len = ft_tablen(nb);
	if ((nb_len % 3) == 0)
		separate_3(nb, tab);
	else if ((nb_len % 3) == 1)
		separate_1(nb, tab);
	else if ((nb_len % 3) == 2)
		separate_2(nb, tab);
	else
	{
		write (1, "Error\n", 6);
		exit(1);
	}
}

// IF WE HAVE AN UNIT (FIRST SECTION NEED TO HAVE ONE NUMBER)
void	separate_1(char *nb, char **tab)
{
	int	i;
	int	j;
	int	x;
	int	tab_nb;

	tab_nb = ((ft_tablen(nb) / 3) + 1);
	tab = malloc(tab_nb);
	tab[0] = malloc(2);
	tab[0][0] = nb[0];
	tab[0][1] = '\0';
	i = 1;
	j = 0;
	x = 1;
	while (i < tab_nb)
	{
		j = 0;
		tab[i] = malloc(4);
		while (j < 3)
		{
			tab[i][j++] = nb[x++];
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
}

// IF WE HAVE A TEN (FIRST SECTION NEED TO HAVE TWO NUMBERS)
void	separate_2(char *nb, char **tab)
{
	int	i;
	int	j;
	int	x;
	int	tab_nb;

	tab_nb = ((ft_tablen(nb) / 3) + 1);
	tab = malloc(tab_nb);
	tab[0] = malloc(3);
	tab[0][0] = nb[0];
	tab[0][1] = nb[1];
	tab[0][2] = '\0';
	i = 1;
	j = 0;
	x = 2;
	while (i < tab_nb)
	{
		j = 0;
		tab[i] = malloc(4);
		while (j < 3)
		{
			tab[i][j++] = nb[x++];
		}
		tab[i++][j] = '\0';
	}
	tab[i] = 0;
}

// IF WE HAVE A HUNDRED (WE JUST CUT IN 3 SECTIONS)
void	separate_3(char *nb, char **tab)
{
	int	i;
	int	j;
	int	x;
	int	tab_nb;

	i = 0;
	j = 0;
	x = 0;
	tab_nb = (ft_tablen(nb) / 3);
	tab = malloc(tab_nb);
	while (i < tab_nb)
	{
		j = 0;
		tab[i] = malloc(4);
		while (j < 3)
		{
			tab[i][j++] = nb[x++];
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
}
