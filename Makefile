# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/02 19:36:22 by hhow-cho          #+#    #+#              #
#    Updated: 2019/06/02 19:36:23 by hhow-cho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ________________________________ Variables _________________________________ #

NAME 		=		libftprintf.a
SHELL 		=		/bin/sh
CC 			=		gcc
RM 			=		rm -rf
AR 			=		ar
ARFLAGS 	=		-rcs
CFLAGS 		=		-Wall -Wextra -Werror
CPPFLAGS 	=		-I$(INCDIR)

QUIET 		=		@
ECHO 		=		@echo
ifneq ($(QUIET),@)
ECHO 		=		@true
endif

TEST 		=		tests/tests/tests
INCDIR 		=		includes

INCLUDES 	=		$(addprefix -I, $(INCDIR))

.SUFFIXES:
.SUFFIXES: .c .o .h

# __________________________________ Colors __________________________________ #

ifdef TERM
EOC 		=		\033[0m
RED 		=		\033[38;5;88m
YELLOW		=		\033[38;5;178m
GREEN 		=		\x1b[32;01m
PURPLE 		=		\033[38;5;98m
BLUE		=		\x1b[34;01m
GREY		=		\033[38;5;242m
endif

# __________________________________ Rules ___________________________________ #

.PHONY: all
all: $(NAME)

$(NAME):
	$(ECHO) "$(GREY)Compiling ...$(EOC)"
	$(QUIET) $(CC) $(CFLAGS) $(INCLUDES) -ggdb3 -g -c srcs/*.c libft/*.c srcs/*/*.c
	$(ECHO) "$(GREY)Archiving $(EOC)$(PURPLE)object files$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(AR) $(ARFLAGS) $@ *.o
	$(QUIET)make clean
	$(ECHO) "$(GREEN)⟹  $(NAME) is ready.$(EOC)"
	$(QUIET) $(CC) -Iincludes -g $(NAME) main.c -o main
	$(ECHO) "$(GREEN)⟹  main executable has been succesfully created.$(EOC)"
	./main


.PHONY: compile_test
compile_test:
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x

.PHONY: test
test: re
	cd tests/tests && $(MAKE) test

.PHONY: valgrind
valgrind: fclean
	$(ECHO) "$(GREY)Compiling ...$(EOC)"
	$(QUIET) $(CC) -Iincludes -g -std=c11 -ggdb3 main.c libft/*.c srcs/*.c srcs/*/*.c -o main
	$(ECHO) "$(GREEN)⟹  main executable has been succesfully created.$(EOC)"
	./main
	$(QUIET) $(RM) leaks.txt
	$(ECHO) "$(GREY)⟹  leaks.txt has been succesfully deleted.$(EOC)"
	$(ECHO) "$(GREY)Checking leaks with Valgrind ...$(EOC)"
	$(ECHO) "\n\n---------------------- main ----------------------\n\n" >> leaks.txt
	$(QUIET) valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -v ./main >> leaks.txt 2>&1
	$(ECHO) "$(GREEN)⟹  Valgrind results succesfully stored in leaks.txt.$(EOC)"
	$(QUIET) $(RM) *.o

.PHONY: clean
clean:
	$(ECHO) "$(GREY)Cleaning $(EOC)$(PURPLE)object files$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(RM) *.o
	$(ECHO) "$(GREEN)⟹  All object files succesfully cleaned.$(EOC)"

.PHONY: fclean
fclean: clean
	$(ECHO) "$(GREY)Cleaning $(EOC)$(YELLOW)$(NAME)$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(RM) $(NAME)
	$(ECHO) "$(GREEN)⟹  $(NAME) has been succesfully deleted.$(EOC)"

.PHONY: re
re: fclean all
