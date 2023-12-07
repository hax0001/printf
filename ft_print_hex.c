/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:33:40 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 21:43:28 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*creat_str(unsigned long val, int *j)
{
	int		i;
	char	*str;

	i = 0;
	while (val != 0)
	{
		i++;
		val /= 16;
	}
	str = malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	*j = i - 1;
	return (str);
}

int	ft_print_hex(unsigned long value, int lp)
{
	int		i;
	int		*pi;
	char	*str;

	i = 0;
	pi = &i;
	if (value == 0)
	{
		ft_putstr_fd("0", 1);
		return (1);
	}
	str = creat_str(value, pi);
	if (!str)
		return (0);
	while (value != 0 && i >= 0)
	{
		if ((value % 16) < 10)
			str[i] = (value % 16) + 48;
		if ((value % 16) > 9)
			str[i] = (value % 16) + lp;
		i--;
		value /= 16;
	}
	i = 0;
	i += ft_print_str(str);
	free(str);
	return (i);
}
