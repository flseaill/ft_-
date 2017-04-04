# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flseaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/14 13:10:20 by flseaill          #+#    #+#              #
#    Updated: 2017/01/17 17:05:47 by flseaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC = includes/libft.h
SRC = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c
SRCO = $(SRC:.c=.o)
	CC = gcc
	CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

.c.o:
		$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

$(NAME): $(SRCO)
		ar rc $@ $^
			ranlib $@

clean:
		rm -rf $(SRCO)

fclean: clean
		rm -rf $(NAME)

.PHONY: all re clean fclean
