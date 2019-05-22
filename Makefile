# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmalope <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 15:25:45 by pmalope           #+#    #+#              #
#    Updated: 2019/05/22 14:58:09 by pmalope          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_tolower.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_isascii.c \
	  ft_isalnum.c \
	  ft_isdigit.c \
	  ft_isalpha.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy

OBJ = $(SRC:%.c=%.o)

START: BUILD_LIB

BUILD_LIB: CREATE_OBJ
	ar -rcv $(NAME) $(OBJ)

CREATE_OBJ:
	$(CC) $(FLAGS) -c $(SRC)

NORM:
	norminette -R CheckForbiddenSourceHeader $(SRC) libft.h

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf test

run:
	$(CC) $(FLAGS) $(NAME) main.c -o test
	./test

re: fclean START
