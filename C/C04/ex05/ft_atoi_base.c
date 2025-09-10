/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:54:15 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/16 11:32:19 by lbordet          ###   ########.fr       */
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

int	verif_base(char *base, int base_len)
{
	int	i;
	int	j;

	if ((base_len == 0) || (base_len == 1))
		return (0);
	i = 0;
	j = 0;
	while (i < base_len)
	{
		j = 0;
		while (j < base_len)
		{
			if ((base[i] == base[j]) && (i != j))
				return (0);
			j++;
		}
		if ((base[i] == '+') || (base[i] == '-'))
			return (0);
		if ((base[i] == ' ') || ((base[i] < 14) && (base[i] > 8)))
			return (0);
		i++;
	}
	return (1);
}

void	ft_numbers(char *str, int *i, int *nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if ((str[*i] >= base[0]) && (str[*i] <= base[base_len - 1]))
	{
		*nb = str[*i] - '0';
		*i = *i + 1;
	}
	while ((str[*i] >= base[0]) && (str[*i] <= base[base_len - 1]))
	{
		if ((str[*i - 1] >= '0') && (str[*i - 1] <= '9'))
			*nb = ((*nb * base_len) + (str[*i] - '0'));
		*i = *i + 1;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb_moins;
	int	nb;
	int	base_len;

	i = 0;
	nb_moins = 0;
	nb = 0;
	base_len = ft_strlen(base);
	if (verif_base(base, base_len) == 0)
		return (0);
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
	ft_numbers(str, &i, &nb, base);
	if ((nb_moins % 2) == 1)
		nb *= -1;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[20] = "   ---+--+1234ab567";
	char	chaine_2[13] = "\n ++--+1010dj";
	char	chaine_3[7] = "fds589";
	char	chaine_4[16] = "   +---1070abcd";

	printf("%d\n", ft_atoi_base(chaine, "0123456789"));
	printf("%d\n", ft_atoi_base(chaine_2, "01"));
	printf("%d\n", ft_atoi_base(chaine_3, "0123456789"));
	printf("%d\n", ft_atoi_base(chaine_4, "01234567"));
}
*/
