/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:05:13 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:01:50 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] < '0') || (str[compteur] > '9'))
			return (0);
		compteur ++;
	}
	return (1);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "12345";
        char    chaine_2[11] = "1g2d6;8A5*";
        char    chaine_3[1] = "";

        printf("%d", ft_str_is_numeric(chaine_1));
        printf("%d", ft_str_is_numeric(chaine_2));
        printf("%d", ft_str_is_numeric(chaine_3));
}
*/
