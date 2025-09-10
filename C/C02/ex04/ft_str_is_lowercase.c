/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:49:18 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:02:54 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] < 'a') || (str[compteur] > 'z'))
			return (0);
		compteur ++;
	}
	return (1);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "abcde";
        char    chaine_2[11] = "1g2d6;8A5*";
        char    chaine_3[1] = "";

        printf("%d", ft_str_is_lowercase(chaine_1));
        printf("%d", ft_str_is_lowercase(chaine_2));
        printf("%d", ft_str_is_lowercase(chaine_3));
}
*/
