/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:07:40 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 19:50:28 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.h"

// FUNCTION WHAT RETURN THE LENGTH OF A STR
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

// FUNCTION WHAT WRITE A CHAR
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// FUNCTION WHAT PRINT A STR
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

// FUNCTION FOR KNOWING IF A CAR IS PRINTABLE
int	is_printable(char car)
{
	if ((car < ' ') || (car == 127))
		return (0);
	return (1);
}

// FUNCTION WHAT PRINT A STRS
void	ft_putstrs(char **strs)
{
	int	i;

	i = 0;
	if (strs)
	{
		while (strs[i])
		{
			ft_putstr(strs[i]);
			i++;
		}
	}
}
