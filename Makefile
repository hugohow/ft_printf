# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/02 19:36:22 by hhow-cho          #+#    #+#              #
#    Updated: 2019/06/13 14:10:04 by hhow-cho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME 		=		libftprintf.a
CC			= 		gcc
CFLAGS 		= 		-I includes/ -Wall -Werror -Wextra
OBJ 		= 		$(SRC:.c=.o)

C_OK		=		"\033[35m"
C_GOOD		=		"\033[32m"
C_NO		=		"\033[00m"

SUCCESS		=		$(C_GOOD)SUCCESS$(C_NO)
OK			=		$(C_OK)OK$(C_NO)

SRC =	srcs/ft_dprintf.c						\
		srcs/ft_printf.c						\
		srcs/ft_sprintf.c						\
		srcs/ft_print_arg/ft_print_c.c			\
		srcs/ft_print_arg/ft_print_d.c			\
		srcs/ft_print_arg/ft_print_d_h.c		\
		srcs/ft_print_arg/ft_print_d_hh.c		\
		srcs/ft_print_arg/ft_print_d_l.c		\
		srcs/ft_print_arg/ft_print_d_ll.c		\
		srcs/ft_print_arg/ft_print_e.c			\
		srcs/ft_print_arg/ft_print_e_l.c		\
		srcs/ft_print_arg/ft_print_e_l_maj.c	\
		srcs/ft_print_arg/ft_print_f.c			\
		srcs/ft_print_arg/ft_print_f_l.c		\
		srcs/ft_print_arg/ft_print_f_l_maj.c	\
		srcs/ft_print_arg/ft_print_nb.c			\
		srcs/ft_print_arg/ft_print_nb_h.c		\
		srcs/ft_print_arg/ft_print_nb_hh.c		\
		srcs/ft_print_arg/ft_print_nb_l.c		\
		srcs/ft_print_arg/ft_print_nb_ll.c		\
		srcs/ft_print_arg/ft_print_p.c			\
		srcs/ft_print_arg/ft_print_percent.c	\
		srcs/ft_print_arg/ft_print_s.c			\
		srcs/ft_print_arg/ft_printf_arg.c		\
		srcs/helpers/ft_add_char.c				\
		srcs/helpers/ft_apply_e.c				\
		srcs/helpers/ft_condition_fill.c		\
		srcs/helpers/ft_condition_flag.c		\
		srcs/helpers/ft_convert_output.c		\
		srcs/helpers/ft_flaglen.c				\
		srcs/helpers/ft_format_is_valid.c		\
		srcs/helpers/ft_get_binary.c			\
		srcs/helpers/ft_get_color.c				\
		srcs/helpers/ft_itoa_e.c				\
		srcs/helpers/ft_itoa_f.c				\
		srcs/helpers/ft_itoa_f_l.c				\
		srcs/helpers/ft_nblen_ull.c				\
		srcs/helpers/ft_print_null.c			\
		srcs/helpers/ft_size_to_allocate.c		\
		srcs/helpers/ft_str_join.c				\
		srcs/helpers/ft_str_join_r.c			\
		srcs/helpers/ft_str_precision_count.c	\
		srcs/helpers/ft_strcat_char.c			\
		srcs/helpers/ft_strdup_alloc.c			\
		srcs/helpers/ft_ulltoa_offset.c			\
		srcs/padding/ft_apply_padding_e.c		\
		srcs/padding/ft_apply_padding_nb.c		\
		srcs/padding/ft_apply_padding_p.c		\
		srcs/padding/ft_apply_padding_str.c		\
		srcs/parser/ft_create_flag.c			\
		srcs/parser/ft_flag_create_space.c		\
		srcs/parser/ft_flag_get_hash.c			\
		srcs/parser/ft_flag_get_key.c			\
		srcs/parser/ft_flag_get_length.c		\
		srcs/parser/ft_flag_get_minus.c			\
		srcs/parser/ft_flag_get_plus.c			\
		srcs/parser/ft_flag_get_precision.c		\
		srcs/parser/ft_flag_get_width.c			\
		srcs/parser/ft_flag_get_zero.c			\
		srcs/precision/ft_apply_precision_nb.c	\
		srcs/precision/ft_apply_precision_str.c		

all: $(NAME)

%.o: %.c
	@printf "[ft_printf] Compiling [.:]\r"
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "[ft_printf] Compiling [:.]\r"

$(NAME): $(OBJ)
	@make -C libft/
	@cp libft/libft.a ./$(NAME)
	@ar rc $@ $^
	@ranlib $@
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@printf "[ft_printf] Removed object files!\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

re: fclean all

ifeq ($(shell uname),Darwin)
test: re
	cd tests/tests && $(MAKE) test
else
test: re
	@echo "\n\n\033[45mBuild ok, launch tests on OSX\033[0m\n\n"
	exit 0
endif

.PHONY: all clean fclean re test