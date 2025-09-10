/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:17:31 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/19 12:03:51 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tablen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*int_tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	j = min;
	int_tab = malloc((max - min) * sizeof(int));
	if (int_tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = int_tab;
	while (j < max)
	{
		int_tab[i] = j;
		j++;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	int	int_1 = -50;
	int	int_2 = 100;
	int	*int_tab;
	int	i;
	
	printf("%d\n\n", ft_ultimate_range(&int_tab, int_1, int_2));
	i = 0;
	while (i < (int_2 - int_1))
	{
		printf("%d\n", int_tab[i]);
		i++;
	}
}
*/
