/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:09:57 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/18 14:15:57 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_car_is_alpha(char car)
{
	if ((car < 'A') || (car > 'z'))
		return (0);
	else if ((car > 'Z') && (car < 'a'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
	}
	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i++])
	{
		if (ft_car_is_alpha(str[i]) == 1)
		{
			if (ft_car_is_alpha(str[i - 1]) == 0)
			{
				if ((str[i - 1] < '0') || (str[i - 1] > '9'))
					str[i] -= 32;
			}
		}
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	phrase[62] = "salut, comMent tu\nvas ? 42
	mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(phrase));
}
*/
