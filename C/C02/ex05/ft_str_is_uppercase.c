/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:57:55 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:04:55 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] < 'A') || (str[compteur] > 'Z'))
			return (0);
		compteur ++;
	}
	return (1);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "ABCDE";
        char    chaine_2[11] = "AB2d6;8A5*";
        char    chaine_3[1] = "";

        printf("%d", ft_str_is_uppercase(chaine_1));
        printf("%d", ft_str_is_uppercase(chaine_2));
        printf("%d", ft_str_is_uppercase(chaine_3));
}
*/
