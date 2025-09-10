/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:23:36 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/11 10:33:16 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char	chaine_1[8] = "bonjour";
	char	chaine_2[13] = "bonjourparis";
	char	chaine_3[8] = "bonjour";
	char	chaine_4[4] = "abcd";

	printf("%d\n", ft_strcmp(chaine_1, chaine_2));
	printf("%d\n", strcmp(chaine_1, chaine_2));
	printf("%d\n", ft_strcmp(chaine_1, chaine_3));
	printf("%d\n", strcmp(chaine_1, chaine_3));
	printf("%d\n", ft_strcmp(chaine_1, chaine_4));
	printf("%d\n", strcmp(chaine_1, chaine_4));
}
*/
