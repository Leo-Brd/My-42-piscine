/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:39:00 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/18 11:24:27 by lbordet          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	size = size - dest_len;
	while (src[i] && (i < (size - 1)))
	{
		dest[dest_len + i] = src[i];
		i ++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int     main(void)
{
        char    chaine[8] = "bonjour";
        char    dest[100] = "bonsoir";
	char    dest_2[100] = "bonsoir";
	char	dest_3[100] = "bonsoir";

        printf("%u", ft_strlcat(dest, chaine, 100));
	printf("%s\n", dest);
	printf("%u", ft_strlcat(dest_2, chaine, 4));
	printf("%s\n", dest_2);
	printf("%u", ft_strlcat(dest_3, chaine, 11));
	printf("%s\n", dest_3);
}
*/
