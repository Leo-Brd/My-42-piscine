/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:41:54 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/18 14:38:56 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa_conv(int entier, char *hexa, char *hexa_2)
{
	int	compteur;

	compteur = 0;
	*hexa = ('0' + (entier / 16));
	if ((entier / 16) > 9)
		*hexa = 'a' + ((compteur / 16) - 10);
	while (compteur <= 127)
	{
		if ((compteur % 16) > 9)
		{
			*hexa_2 = 'a' + ((compteur % 16) - 10);
		}
		else if ((compteur % 16) < 10)
		{
			*hexa_2 = '0' + (compteur % 16);
		}
		if (compteur == entier)
			break ;
		compteur ++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa;
	char	hexa_2;
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < ' ') || (str[i] > '~'))
		{
			write (1, "\\", 1);
			ft_hexa_conv(str[i], &hexa, &hexa_2);
			write (1, &hexa, 1);
			write (1, &hexa_2, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	char	chaine[21] = "Coucou\ntu vas bien ?";
	char    chaine_2[21] = "Coucou\ttu vas bien ?";

	ft_putstr_non_printable(chaine);
	ft_putstr_non_printable(chaine_2);
}
*/
