/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:48:12 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 10:55:11 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i_compteur;

	i_compteur = 0;
	while (src[i_compteur] != '\0')
	{
		dest[i_compteur] = src[i_compteur];
		i_compteur ++;
	}
	dest[i_compteur] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[7] = "bonjour";
	char	dest[7];
	int	compteur;
	 
	ft_strcpy(dest, chaine);
	compteur = 0;
	while (compteur < 8)
	{
		printf("%c", dest[compteur]);
		compteur ++;
	}
}
*/
