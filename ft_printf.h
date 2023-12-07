/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:00:57 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/07 23:24:39 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_nbr(int nbr);
int	ft_print_pointer(unsigned long value);
int	ft_print_hex(unsigned long value, int lp);
int	ft_print_unsigned(unsigned long nbr);

#endif
