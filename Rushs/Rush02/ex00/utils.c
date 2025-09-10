/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:15:04 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/21 20:54:21 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// FOR HAVING THE LENGTH OF A TAB
int	ft_tablen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

// FOR FREE THE MEMORY ALLOCATION OF OUR TAB OF TAB
void	free_tab_in_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

// FOR GETTING A CHAR NUMBER INTO AN INT (WE DIDN'T HAVE THE TIME TO USE IT)
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 0;
	output = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = (output * 10) + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 1)
		return (output * -1);
	return (output);
}

// FOR PRINT A STRING
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
