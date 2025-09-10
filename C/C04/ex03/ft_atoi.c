/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:44:46 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/15 17:56:10 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numbers(char *str, int *i, int *nb)
{
	if ((str[*i] >= '0') && (str[*i] <= '9'))
	{
		*nb = str[*i] - '0';
		*i = *i + 1;
	}
	while ((str[*i] >= '0') && (str[*i] <= '9'))
	{
		if ((str[*i - 1] >= '0') && (str[*i - 1] <= '9'))
			*nb = ((*nb * 10) + (str[*i] - '0'));
		*i = *i + 1;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb_moins;
	int	nb;

	i = 0;
	nb_moins = 0;
	nb = 0;
	while ((str[i] == ' ') || ((str[i] < 14) && (str[i] > 8)))
	{
		i ++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_moins ++;
		i ++;
	}
	ft_numbers(str, &i, &nb);
	if ((nb_moins % 2) == 1)
		nb *= -1;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[20] = "   ---+--+1234ab567";
	char	chaine_2[13] = "\n ++--+598dj";
	char	chaine_3[7] = "fds589";

	printf("%d\n", ft_atoi(chaine));
	printf("%d\n", ft_atoi(chaine_2));
	printf("%d\n", ft_atoi(chaine_3));
}
*/
