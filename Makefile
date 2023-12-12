# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 19:29:02 by nait-bou          #+#    #+#              #
#    Updated: 2023/12/12 11:24:42 by nait-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

FILES = ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_pointer.c \
		ft_print_hex.c \
		ft_print_unsigned.c \
		ft_printf_tools.c

OFILES = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	ar cr $(NAME) $(OFILES)
	
clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
