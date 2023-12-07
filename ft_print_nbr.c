/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:50:49 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 21:45:00 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nbr)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = nbr;
	t = nbr;
	ft_putnbr_fd(t, 1);
	if (j == -2147483648)
		return (11);
	if (j == 0)
		return (1);
	if (j < 0)
	{
		j *= (-1);
		i++;
	}
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	return (i);
}
