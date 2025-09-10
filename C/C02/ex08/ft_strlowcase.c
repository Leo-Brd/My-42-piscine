/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:05:22 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:14:04 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] >= 'A') && (str[compteur] <= 'Z'))
			str[compteur] += 32;
		compteur ++;
	}
	return (str);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "ABCDE";
        char    chaine_2[11] = "KDNHATWIPX";
	char	chaine_3[12] = "KSI´]YXgh}";

	printf("%s\n", ft_strlowcase(chaine_1));
	printf("%s\n", ft_strlowcase(chaine_2));
	printf("%s\n", ft_strlowcase(chaine_3));	
}
*/
