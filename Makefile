NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -Iincludes -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
	rm -rf *.o
	gcc -g $(NAME) main.c -o main
	./main

test: re
	# cd tests/tests && $(MAKE) test
	cd tests/tests && ./tests

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
