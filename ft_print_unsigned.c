/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hax <hax@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:51:46 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 02:04:43 by hax              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(unsigned long n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_print_unsigned(unsigned long nbr)
{
	unsigned long	i;
	unsigned long	j;


	i = 0;
	j = nbr;
	ft_putnbr(j);
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
