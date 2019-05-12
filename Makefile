# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/12 12:21:31 by mboivin           #+#    #+#              #
#    Updated: 2019/05/12 17:05:48 by mboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ________________________________ Variables _________________________________ #

NAME 		:=		libftprintf.a
SHELL 		:=		/bin/sh
CC 			:=		gcc
RM 			:=		rm -rf
AR 			:=		ar
ARFLAGS 	:=		-rcs
CFLAGS 		:=		-Wall -Wextra -Werror
CPPFLAGS 	:=		-I $(INCDIR)

QUIET 		:=		@
ECHO 		:=		@echo
ifneq ($(QUIET),@)
ECHO 		:=		@true
endif

TEST 		:=		tests/tests/tests
INCDIR 		:=		includes

INCLUDES 	:=		$(addprefix -I, $(INCDIR))

.SUFFIXES:
.SUFFIXES: .c .o .h

# __________________________________ Colors __________________________________ #

ifdef TERM
EOC 		:=		\033[0m
RED 		:=		\033[38;5;88m
GREEN 		:=		\x1b[32;01m
PURPLE 		:=		\033[38;5;98m
BLUE		:=		\x1b[34;01m
GREY		:=		\033[38;5;242m
endif

# __________________________________ Rules ___________________________________ #

.PHONY: all
all: $(NAME)

$(NAME):
	$(QUIET) $(CC) $(CFLAGS) $(INCLUDES) -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	$(ECHO) "Building archive file $(BLUE)$(NAME)$(NC)..."
	$(QUIET) $(AR) $(ARFLAGS) $@ *.o
	make clean
	$(ECHO) "Building $(GREEN)main$(EOC) executable..."
	$(QUIET) $(CC) -g $(NAME) main.c -o main
	./main


.PHONY: compile_test
compile_test:
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x

.PHONY: test
test:
	cd tests/tests && $(MAKE) test

.PHONY: valgrind
valgrind: re
	$(QUIET) $(RM) leaks.txt
	$(ECHO) "$(GREEN)⟹  leaks.txt has been succesfully deleted.$(EOC)"
	$(ECHO) "Checking leaks with Valgrind..."
	$(ECHO) "\n\n---------------------- main ----------------------\n\n" >> leaks.txt
	$(QUIET) valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -v ./main >> leaks.txt 2>&1
	$(ECHO) "⟹  Valgrind results succesfully stored in $(PURPLE)leaks.txt$(EOC)"
	$(QUIET) $(RM) *.o

.PHONY: clean
clean:
	$(ECHO) "Cleaning object files..."
	$(QUIET) $(RM) *.o
	$(ECHO) "$(GREEN)⟹  All object files succesfully cleaned.$(EOC)"

.PHONY: fclean
fclean: clean
	$(ECHO) "Cleaning  $(BLUE)$(NAME)$(EOC)..."
	$(QUIET) $(RM) $(NAME)
	$(ECHO) "$(GREEN)⟹  $(NAME) has been succesfully deleted.$(EOC)"

.PHONY: re
re: fclean all
