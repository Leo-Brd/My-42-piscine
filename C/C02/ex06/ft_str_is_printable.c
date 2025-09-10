/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:06:27 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/10 11:06:01 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if ((str[compteur] < ' ') || (str[compteur] == 127))
			return (0);
		compteur ++;
	}
	return (1);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine_1[6] = "1a3O;";
        char    chaine_2[11] = "aH&\127Lm;\nAr";
        char    chaine_3[1] = "";

        printf("%d", ft_str_is_printable(chaine_1));
        printf("%d", ft_str_is_printable(chaine_2));
        printf("%d", ft_str_is_printable(chaine_3));
}
*/
