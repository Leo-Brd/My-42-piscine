/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:51:52 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/06 17:35:43 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i_temp;

	i_temp = *a;
	*a = *b;
	*b = i_temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i_compteur;
	int	i_compteur_2;

	i_compteur = 0;
	i_compteur_2 = size - 1;
	while (i_compteur < (size / 2))
	{
		ft_swap(&tab[i_compteur], &tab[i_compteur_2]);
		i_compteur_2--;
		i_compteur++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	compteur;

	compteur = 0;
	ft_rev_int_tab(tab, 6);
	
	
	while (compteur <= 5)
	{
		printf("%d", tab[compteur]);
		compteur ++;
	}
}
*/
