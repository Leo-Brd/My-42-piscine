/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:46:47 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/11 10:52:01 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_compteur;
	unsigned int	i_compteur_2;

	i_compteur = 0;
	while (dest[i_compteur] != '\0')
	{
		i_compteur ++;
	}
	i_compteur_2 = 0;
	while ((src[i_compteur_2] != '\0') && (i_compteur_2 < nb))
	{
		dest[i_compteur] = src[i_compteur_2];
		i_compteur ++;
		i_compteur_2 ++;
	}
	dest[i_compteur] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
        char    chaine[8] = "bonjour";
        char    dest[17] = "bonsoir";
	char    dest_2[17] = "bonsoir";

	printf("%s\n", strncat(dest, chaine, 8));
	printf("%s", strncat(dest_2, chaine, 4));
}
*/
