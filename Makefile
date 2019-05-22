# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmalope <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 15:25:45 by pmalope           #+#    #+#              #
#    Updated: 2019/05/22 08:37:24 by pmalope          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_tolower.c

OBJ = ft_tolower.o

START: BUILD_LIB

BUILD_LIB: CREATE_OBJ
	ar -rcv $(NAME) $(OBJ)

CREATE_OBJ:
	$(CC) $(FLAGS) -c $(SRC)

NORM:
	norminette -R CheckForbiddenSourceHeader $(SRC) libft.h

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf *.a
	rm -rf test

run:
	$(CC) $(FLAGS) $(NAME) main.c -o test
	./test
