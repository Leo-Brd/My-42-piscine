/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:13:53 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/11 10:39:25 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i_compteur;
	int	i_compteur_2;

	i_compteur = 0;
	while (dest[i_compteur] != '\0')
	{
		i_compteur ++;
	}
	i_compteur_2 = 0;
	while (src[i_compteur_2])
	{
		dest[i_compteur] = src[i_compteur_2];
		i_compteur ++;
		i_compteur_2 ++;
	}
	dest[i_compteur] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine[8] = "bonjour";
        char    dest[17] = "bonsoir";

        printf("%s", ft_strcat(dest, chaine));
}
*/
