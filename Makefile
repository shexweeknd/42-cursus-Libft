FLAGS = -Wall -Wextra -Werror

NAME = libft.a

USE = libft

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)
	ranlib $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(USE): $(NAME)
	cc $(FLAGS) main.c -L. lft.out -o $(USE)

clean:
	rm -f $(OBJ) *.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re