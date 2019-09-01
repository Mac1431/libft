NAME = run

DEBUG = debugMode

LIB_PATH = ../libft.a

SRC = main.c link_list.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	@make -C ../
	@gcc $(CFLAGS) $(SRC) -o $(NAME) $(LIB_PATH)

all: $(NAME)

clean:
	@make clean -C ../
	@rm -rf $(OBJ)

fclean: clean
	@make fclean -C ../
	@rm -rf $(OBJ) $(NAME)

re: fclean $(NAME)


