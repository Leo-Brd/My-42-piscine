/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:07:58 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/14 10:57:34 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i_indice;

	i_indice = 0;
	while (str[i_indice])
	{
		i_indice++;
	}
	return (i_indice);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i_2;
	int	i_len;

	i_len = ft_strlen(to_find);
	i = 0;
	i_2 = 0;
	if (i_len == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			i_2 = 0;
			while ((str[i + i_2]) && (to_find[i_2] == str[i + i_2]))
			{
				if (i_2 == i_len - 1)
					return (&str[i]);
				i_2 ++;
			}
		}
		i ++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	chaine_1[21] = "Je suis a l ecole 42";
	char	chaine_2[6] = "ecole";
	char	chaine_3[1] = "";
	char	chaine_4[12] = "je suis eco";

	printf("%s\n", ft_strstr(chaine_1, chaine_2));
	printf("%s\n", strstr(chaine_1, chaine_2));
	printf("%s\n", strstr(chaine_1, chaine_3));
	printf("%s\n", ft_strstr(chaine_1, chaine_3));
	printf("%s\n", strstr(chaine_3, chaine_2));
	printf("%s\n", ft_strstr(chaine_3, chaine_2));
	printf("%s\n", strstr(chaine_4, chaine_2));
	printf("%s", ft_strstr(chaine_4, chaine_2));
}
*/
