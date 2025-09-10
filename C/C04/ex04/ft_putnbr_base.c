/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:24:13 by lbordet           #+#    #+#             */
/*   Updated: 2024/07/24 11:09:10 by lbordet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	verif_base(char *base, int base_len)
{
	int	i;
	int	j;

	if ((base_len == 0) || (base_len == 1))
		return (0);
	i = 0;
	j = 0;
	while (i < base_len)
	{
		j = 0;
		while (j < base_len)
		{
			if ((base[i] == base[j]) && (i != j))
				return (0);
			j++;
		}
		if ((base[i] == '+') || (base[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (verif_base(base, base_len) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= 0 && nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}


int	main(void)
{
	ft_putnbr_base(10, "01");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(150, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(150, "poneyvifi");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
}

