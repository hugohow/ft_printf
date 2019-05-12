# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/12 12:21:31 by mboivin           #+#    #+#              #
#    Updated: 2019/05/12 13:39:14 by mboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ******************************** Variables ********************************* #

NAME =			libftprintf.a
CC =			gcc
RM =			rm -rf
AR =			ar
ARFLAGS =		-rcs
CFLAGS =		-Wall -Wextra -Werror
CPPFLAGS =		-I $(INCDIR)

QUIET :=		@
ECHO :=			@echo
ifneq ($(QUIET),@)
ECHO :=			@true
endif

TEST =			tests/tests/tests
INCDIR =		includes

INCLUDES =		$(addprefix -I, $(INCDIR))

.SUFFIXES:
.SUFFIXES: .c .o .h

# ********************************* Colors *********************************** #

ifdef TERM
EOC =			\033[0m
RED =			\033[31m
GREEN =			\033[32m
YELLOW =		\033[33m
WHITE =			\033[37m
endif

# ********************************** Rules *********************************** #

all: $(NAME)

$(NAME):
	$(QUIET) $(CC) $(CFLAGS) $(INCLUDES) -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	$(QUIET) $(AR) $(ARFLAGS) $@ *.o
	make clean
	$(ECHO) "$(WHITE)Building main executable...$(EOC)"
	$(QUIET) $(CC) -g $(NAME) main.c -o main
	./main

compile_test:
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x

test:
	cd tests/tests && $(MAKE) test

valgrind: re
	$(QUIET) $(RM) leaks.txt
	$(ECHO) "$(RED)leaks.txt has been deleted.$(EOC)"
	$(ECHO) "Checking leaks with Valgrind..."
	$(ECHO) "\n\n---------------------- main ----------------------\n\n" >> leaks.txt
	$(QUIET) valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -v ./main >> leaks.txt 2>&1
	$(ECHO) "$(GREEN)Valgrind results stored in leaks.txt$(EOC)"
	$(QUIET) $(RM) *.o

clean:
	$(ECHO) "Cleaning object files..."
	$(QUIET) $(RM) *.o
	$(ECHO) "$(YELLOW)All object files were removed.$(EOC)"

fclean: clean
	$(ECHO) "Removing $(NAME)..."
	$(QUIET) $(RM) $(NAME)
	$(ECHO) "$(RED)$(NAME) has been deleted.$(EOC)"

re: fclean all

.PHONY: all clean fclean re valgrind test compile_test
