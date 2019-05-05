NAME = libftprintf.a

CC = gcc

RM = rm -rf

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I $(INCDIR)

# ******************************* Directories ******************************** #

TEST =		tests/tests/tests

INCDIR =	includes

INCLUDES =	$(addprefix -I, $(INCDIR))

# ********************************* Colors *********************************** #

ifdef TERM

EOC =		\033[0m
RED =		\033[31m
GREEN =		\033[32m
YELLOW =	\033[33m
WHITE =		\033[37m
endif

# ********************************** Rules *********************************** #

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(INCLUDES) -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	$(AR) $(NAME) *.o
	make clean
	@echo "$(WHITE)Building main executable...$(EOC)"
	@$(CC) -g $(NAME) main.c -o main
	./main

compile_test:
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x

# cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x
test:
	cd tests/tests && $(MAKE) test

valgrind: re
	@$(RM) leaks.txt
	@echo "$(RED)leaks.txt has been deleted.$(EOC)"
	@echo "$(WHITE)Checking leaks with Valgrind...$(EOC)"
	@echo "\n\n---------------------- main ----------------------\n\n" >> leaks.txt
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main >> leaks.txt 2>&1
	@echo "$(GREEN)Valgrind results stored in leaks.txt$(EOC)"
	@make clean

clean:
	@echo "$(WHITE)Cleaning object files...$(EOC)"
	@$(RM) *.o
	@echo "$(YELLOW)All object files were removed.$(EOC)"

fclean: clean
	@echo "$(WHITE)Removing $(NAME)...$(EOC)"
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) has been deleted.$(EOC)"

re: fclean all

.PHONY: all clean fclean re valgrind test
