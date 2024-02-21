FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)
	ranlib $(NAME)

.c.o:
	cc -c $(FLAGS) $(SRC) -I ./

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) *.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re