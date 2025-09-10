/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:53:34 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/18 19:48:17 by lbordet          ###   ########.fr       */
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

int	alloc_len(int size, char **strs, char *sep)
{
	int	nb;
	int	i;
	int	j;

	i = 0;
	nb = 1;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			nb++;
			j++;
		}
		i++;
	}
	nb = nb + (ft_strlen(sep) * size);
	return (nb);
}

void	fill_sep(int *j, int *x, char *str, char *sep)
{
	*j = 0;
	while (*j < ft_strlen(sep))
	{
		str[*x] = sep[*j];
		*j = *j + 1;
		*x = *x + 1;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*str;

	i = -1;
	x = 0;
	str = malloc(alloc_len(size, strs, sep));
	if ((str == NULL) || (size == 0))
	{
		str = NULL;
		return (str);
	}
	while (++i < size)
	{
		j = -1;
		while (++j < ft_strlen(strs[i]))
		{
			str[x++] = strs[i][j];
		}
		fill_sep(&j, &x, str, sep);
	}
	str[x - ft_strlen(sep)] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*result;
	
	result = ft_strjoin((argc - 1), ++argv, "-");
	printf("%s", result);
	free(result);
}
*/
