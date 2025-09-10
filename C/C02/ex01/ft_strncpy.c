/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:46:51 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/11 13:45:45 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i_compteur;

	i_compteur = 0;
	while ((src[i_compteur]) && (i_compteur < n))
	{
		dest[i_compteur] = src[i_compteur];
		i_compteur ++;
	}
	while (i_compteur < n)
	{
		dest[i_compteur] = '\0';
		i_compteur ++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[8] = "bonjour";
	char	dest[15];
	char	dest_2[8];

	printf("%s\n", ft_strncpy(dest, chaine, 8));
	printf("%s\n", ft_strncpy(dest, chaine, 15));
	printf("%s", ft_strncpy(dest_2, chaine, 4));
}
*/
