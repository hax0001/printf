/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:09:34 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 19:02:16 by nait-bou         ###   ########.fr       */
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

int	ft_print_pointer(unsigned long value)
{
	int		i;
	int		*pi;
	char	*str;

	i = 0;
	pi = &i;
	str = creat_str(value, pi);
	if (!str)
		return (0);
	if (value == 0)
		ft_putstr_fd("0", 1);
	while (value != 0 && i >= 0)
	{
		if ((value % 16) < 10)
			str[i] = (value % 16) + 48;
		if ((value % 16) > 9)
			str[i] = (value % 16) + 87;
		i--;
		value /= 16;
	}
	i = 0;
	i += ft_print_str("0x");
	i += ft_print_str(str);
	free(str);
	return (i);
}
