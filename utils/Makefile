# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 11:45:47 by rcruz-an          #+#    #+#              #
#    Updated: 2023/01/26 16:43:44 by rcruz-an         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = libftprintf.a
SCRIPTS = ft_printf.c ft_putchar.c ft_putnbr_xX.c ft_putnbr.c ft_putpointer.c ft_putstr.c

OBJS = $(SCRIPTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all