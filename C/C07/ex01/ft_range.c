/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:57:20 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/19 10:51:06 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*int_tab;

	if (min >= max)
		return (NULL);
	i = 0;
	j = min;
	int_tab = malloc((max - min) * sizeof(int));
	if (int_tab == NULL)
		return (NULL);
	while (j < max)
	{
		int_tab[i] = j;
		j++;
		i++;
	}
	return (int_tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int	int_1 = -50;
	int	int_2 = 100;
	int	i = 0;
	int	*int_tab;
	
	int_tab = ft_range(int_1, int_2);
	while (i < (int_2 - int_1))
	{
		printf("%d\n", int_tab[i]);
		i++;
	}
}
*/
