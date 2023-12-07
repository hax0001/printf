/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:10:30 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 21:45:55 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list arg, char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_print_char(va_arg(arg, int));
	if (format == 's')
		i += ft_print_str(va_arg(arg, char *));
	if (format == 'd')
		i += ft_print_nbr(va_arg(arg, int));
	if (format == 'i')
		i += ft_print_nbr(va_arg(arg, int));
	if (format == 'p')
		i += ft_print_pointer(va_arg(arg, unsigned long));
	if (format == 'u')
		i += ft_print_unsigned(va_arg(arg, unsigned long));
	if (format == 'x')
		i += ft_print_hex(va_arg(arg, unsigned long), 87);
	if (format == 'X')
		i += ft_print_hex(va_arg(arg, unsigned long), 55);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += ft_check(arg, *format);
			else if (*format == '%')
				i += ft_print_char(*format);
		}
		else
			i += ft_print_char(*format);
		format++;
	}
	va_end(arg);
	return (i);
}
