NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
TEST = tests/tests/tests

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -Iincludes -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
	rm -rf *.o
	gcc -g $(NAME) main.c -o main
	./main

test: re
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x


clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
