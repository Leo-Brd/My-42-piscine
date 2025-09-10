/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:22:29 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/14 19:08:54 by dernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		verif(int views[4][4]);
int		conditions(int position[2], char **argv, int *i, int views[4][4]);
void	rush(int views[4][4]);
void	fill_tab(int views[4][4]);
void	launch(int views[4][4], int *i);

int	main(int argc, char **argv)
{
	int	i;
	int	position[2];
	int	views[4][4];

	fill_tab(views);
	i = 0;
	position[0] = 0;
	position[1] = 0;
	if (argc == 2)
	{
		while (argv[1][i] && i <= 31)
		{
			if ((conditions(position, argv, &i, views) == 0))
				return (0);
			i++;
		}
	}
	else
	{
		write (1, "Error\n", 7);
		return (0);
	}
	launch(views, &i);
}

void	fill_tab(int views[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			views[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	conditions(int position[2], char **argv, int *i, int views[4][4])
{
	if (position[1] > 3)
	{
		position[0] = position[0] + 1;
		position[1] = 0;
	}
	if (((argv[1][*i] >= '1') && (argv[1][*i] <= '4')) && ((*i % 2) == 0))
	{
		views[position[0]][position[1]] = argv[1][*i] - '0';
		position[1] = position[1] + 1;
	}
	else if ((argv[1][*i] == ' ') && ((*i % 2) == 1))
		;
	else
	{
		write (1, "Error\n", 7);
		return (0);
	}
	return (1);
}

void	launch(int views[4][4], int *i)
{
	if (*i != 31)
		write (1, "Error\n", 7);
	else if (verif(views) == 0)
		rush(views);
}
