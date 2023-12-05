/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:00:57 by nait-bou          #+#    #+#             */
/*   Updated: 2023/12/05 14:05:26 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include "./Libft/libft.h"
#include <stdarg.h>

int	ft_print_char(char	*c);
int	ft_print_str(char *str);
int	ft_print_nbr(int *nbr);
int	ft_print_pointer(unsigned long value);


#endif
