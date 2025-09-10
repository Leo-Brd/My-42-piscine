/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:36:52 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/18 14:34:50 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	i = 0;
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[8] = "bonjour";
	char	dest[20];
	char	dest_2[5];

	printf("%d\n", ft_strlcpy(dest, chaine, 20));
	printf("%d\n", ft_strlcpy(dest_2, chaine, 4));
	printf("%s\n", dest);
	printf("%s", dest_2);
}
*/
