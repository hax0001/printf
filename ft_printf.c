/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:10:30 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/04 19:12:02 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	arg;

	i = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
			*format++;
		if (ft_strchr("cspdiuxX", *format))
			--------------;
		else if (*format == '%')
			i += ft_print_char(*format);
		*format++;
	}
	va_end(arg);
	return (i);
}

