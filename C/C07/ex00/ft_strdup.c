/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:41:15 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/19 10:47:09 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int			src_len;
	char		*new_str;
	int			i;

	src_len = ft_strlen(src);
	new_str = malloc(src_len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	chaine[8] = "bonjour";

	printf("%s", ft_strdup(chaine));
}
*/
