/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:55:38 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/17 17:18:29 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i_indice;

	i_indice = 0;
	while (str[i_indice])
	{
		i_indice++;
	}
	return (i_indice);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	compteur;

	compteur = 0;
	while (s1[compteur] && s2[compteur])
	{
		if (s1[compteur] != s2[compteur])
		{
			return (s1[compteur] - s2[compteur]);
		}
		compteur ++;
	}
	return (s1[compteur] - s2[compteur]);
}

void	print_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	len_arg;

	i = 1;
	j = 0;
	while (i < argc)
	{
		len_arg = ft_strlen(argv[i]);
		j = 0;
		while (j < len_arg)
		{
			write (1, &argv[i][j], 1);
			j ++;
		}
		write(1, "\n", 1);
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print_args(argc, argv);
	return (0);
}
