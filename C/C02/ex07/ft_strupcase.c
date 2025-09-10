/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:11:36 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:09:59 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] >= 'a') && (str[compteur] <= 'z'))
			str[compteur] -= 32;
		compteur ++;
	}
	return (str);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "abcde";
        char    chaine_2[11] = "jduhnbkolp";
	char	chaine_3[12] = "ksi´]yxGH}";

	printf("%s\n", ft_strupcase(chaine_1));
	printf("%s\n", ft_strupcase(chaine_2));
	printf("%s\n", ft_strupcase(chaine_3));	
}
*/
