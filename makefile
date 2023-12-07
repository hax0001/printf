# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 19:29:02 by nait-bou          #+#    #+#              #
#    Updated: 2023/12/07 21:17:15 by nait-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTPATH = ./libft

FILES = ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_pointer.c \
		ft_print_hex.c \
		ft_print_unsigned.c

OFILES = $(FILES:.c=.o)

all : $(NAME)

makelibft :
	make -C $(LIBFTPATH)
	cp $(LIBFTPATH)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)

$(NAME) : $(OFILES) makelibft
	ar r $(NAME) $(OFILES)
	
clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
