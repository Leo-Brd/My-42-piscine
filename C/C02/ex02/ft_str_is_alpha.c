/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:58:14 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 19:28:21 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		if ((str[compteur] < 'A') || (str[compteur] > 'z'))
			return (0);
		else if ((str[compteur] > 'Z') && (str[compteur] < 'a'))
			return (0);
		compteur ++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine_1[6] = "salut";
	char	chaine_2[6] = "SALUT";
	char	chaine_3[11] = "s4a6l8u't*";
	char	chaine_4[1] = "";

	printf("%d", ft_str_is_alpha(chaine_1));
	printf("%d", ft_str_is_alpha(chaine_2));
	printf("%d", ft_str_is_alpha(chaine_3));
	printf("%d", ft_str_is_alpha(chaine_4));
}
*/
