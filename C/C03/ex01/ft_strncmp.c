/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:16:09 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/15 11:18:09 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	test[0] = "";
	char	chaine_1[8] = "bonjour";
	char	chaine_2[8] = "bonsoir";
	char	chaine_3[8] = "bonjour";
	char	chaine_4[8] = "bonaniv";

	printf("%d\n", ft_strncmp(chaine_1, chaine_2, 7));
	printf("%d\n", strncmp(chaine_1, chaine_2, 7));
	printf("%d\n", ft_strncmp(chaine_1, chaine_3, 7));
	printf("%d\n", strncmp(chaine_1, chaine_3, 7));
	printf("%d\n", ft_strncmp(chaine_1, chaine_4, 3));
	printf("%d\n", strncmp(chaine_1, chaine_4, 3));
	printf("%d\n", ft_strncmp(test, chaine_4, 3));
	printf("%d", strncmp(test, chaine_4, 3));
}
*/
