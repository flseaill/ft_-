# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flseaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/17 20:40:24 by flseaill          #+#    #+#              #
#    Updated: 2017/04/06 16:29:13 by flseaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_isvalid.c \
	  ft_filesize.c \
	  ft_readfile.c \
	  ft_npieces.c \
	  ft_tabpiece.c \
	  ft_solver.c \
	  ft_error.c \
	  ft_solved.c
INC = fillit.h
SRCO = $(SRC:.c=.o)
	CC = gcc
	CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

.c.o:
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

$(NAME): $(SRCO)
	@ar rc $@ $^
	@ranlib $@

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
