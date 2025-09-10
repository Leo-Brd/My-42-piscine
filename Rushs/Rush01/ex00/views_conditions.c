/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:59:44 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/14 19:09:58 by dernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verif_conditions_1(int views[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (views[0][i] == views[1][i])
		{
			if ((views[0][i] != 2) && (views[1][i] != 2))
			{
				return (1);
			}
		}
		if (views[2][i] == views[3][i])
		{
			if ((views[2][i] != 2) && (views[3][i] != 2))
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	verif_conditions_2(int views[4][4])
{
	int	i;
	int	j;
	int	side[2];

	i = 0;
	j = 0;
	side[0] = 0;
	side[1] = 2;
	while (i < 4)
	{
		while (j < 2)
		{
			if (views[side[j]][i] == 4)
			{
				if ((views[side[j] + 1][i] == 3)
				|| (views[side[j] + 1][i] == 2))
				{
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	verif_conditions_3(int views[4][4])
{
	int	i;
	int	j;
	int	side[2];

	i = 0;
	j = 0;
	side[0] = 1;
	side[1] = 3;
	while (i < 4)
	{
		while (j < 2)
		{
			if (views[side[j]][i] == 4)
			{
				if ((views[side[j] - 1][i] == 3)
				|| (views[side[j] - 1][i] == 2))
				{
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	verif(int views[4][4])
{
	if ((verif_conditions_1(views) == 0)
		&& (verif_conditions_2(views) == 0)
		&& (verif_conditions_3(views) == 0))
	{
		return (0);
	}
	else
	{
		write(1, "Error\n", 7);
		return (1);
	}
}
