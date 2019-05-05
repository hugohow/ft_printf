NAME = libftprintf.a

CC = gcc

RM = rm -rf

AR = ar rcs

CFLAGS ?= -Wall -Wextra -Werror

CPPFLAGS = -I $(INCDIR)

# ******************************* Directories ******************************** #

TEST =		tests/tests/tests

INCDIR =	includes

OBJDIR =	objs

# ******************************** C Files *********************************** #

SRCFILES =	ft_printf.c

# flag

SRCFILES +=	ft_create_flag.c \
			ft_flag_create_space.c \
			ft_flag_get_hash.c \
			ft_flag_get_key.c \
			ft_flag_get_length.c \
			ft_flag_get_minus.c \
			ft_flag_get_plus.c \
			ft_flag_get_precision.c \
			ft_flag_get_width.c \
			ft_flag_get_zero.c \
			ft_print_flag.c

# ft_print_arg

SRCFILES +=	ft_printf_arg.c

# ft_print_arg/convert_fcts

SRCFILES +=	ft_print_c.c \
			ft_print_d.c \
			ft_print_d_h.c \
			ft_print_d_hh.c \
			ft_print_d_l.c \
			ft_print_d_ll.c \
			ft_print_f.c \
			ft_print_f_l_maj.c \
			ft_print_nb.c \
			ft_print_nb_h.c \
			ft_print_nb_hh.c \
			ft_print_nb_l.c \
			ft_print_nb_ll.c \
			ft_print_p.c \
			ft_print_percent.c \
			ft_print_s.c

# ft_print_arg/helpers

SRCFILES +=	ft_convert_output.c \
			ft_nblen_ull.c \
			ft_size_to_allocate.c \
			ft_ulltoa_offset.c

# helpers

SRCFILES +=	ft_count_variable.c \
			ft_flaglen.c

# padding

SRCFILES +=	ft_apply_padding.c \
			ft_apply_padding_p.c

# precision

SRCFILES +=	ft_apply_precision.c \
			ft_apply_precision_s.c

# precision/helpers

SRCFILES +=	ft_add_char.c \
			ft_delete_zeros.c \
			ft_prefix_len.c

# libft

SRCFILES =	ft_atoi.c \
			ft_bigint_add.c \
			ft_bigint_divide_by_two.c \
			ft_bigint_multiply_by_two.c \
			ft_bigint_round.c \
			ft_bigint_shift_right.c \
			ft_bigint_trim.c \
			ft_bzero.c \
			ft_convert_base.c \
			ft_ht_add.c \
			ft_ht_create.c \
			ft_ht_free.c \
			ft_ht_get.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lst_insertafter.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstfree.c \
			ft_lstiter.c \
			ft_lstlen.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstpeek.c \
			ft_lstpop.c \
			ft_lstpush.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_str_insert.c \
			ft_str_left_shift.c \
			ft_str_precision_count.c \
			ft_str_right_shift.c \
			ft_strcat.c \
			ft_strcat_r.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_ulltoa.c \
			ft_wcslen.c \
			ft_wputchar.c \
			ft_wputstr.c \
			ft_wstrjoin.c \
			ft_wstrsub.c	

# **************************************************************************** #

INCLUDES =	$(addprefix -I, $(INCDIR))

OBJ =		$(addprefix $(OBJDIR)/, $(SRCFILES:.c=.o))

VPATH =		srcs:srcs/flag:srcs/ft_print_arg:srcs/ft_print_arg/convert_fcts \
			:srcs/ft_print_arg/helpers:srcs/helpers:srcs/padding \
			:srcs/precision:srcs/precision/helpers:libft

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

$(NAME): $(OBJDIR) $(OBJ)
	#$(CC) $(CFLAGS) $(INCLUDES) -g -c srcs/*.c libft/*.c srcs/*/*.c srcs/*/*/*.c
	@$(AR) $(NAME) $(OBJ)
	@echo "$(WHITE)Building main executable...$(EOC)"
	@$(CC) -g $(NAME) main.c -o main
	./main

$(OBJDIR):
	@echo "$(WHITE)Creating build directory...$(EOC)"
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c -g $< -o $@ $(CPPFLAGS)

compile_test:
	cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x

# cd tests/tests && ./generator.sh create conv_cap_x conv_d conv_i conv_o conv_p conv_s conv_u conv_x
test:
	cd tests/tests && $(MAKE) test

debug: CFLAGS = -g
debug: re

valgrind: re
	@$(RM) leaks.txt
	@echo "$(RED)leaks.txt has been deleted.$(EOC)"
	@echo "$(WHITE)Checking leaks with Valgrind...$(EOC)"
	@echo "\n---------------------- main ----------------------\n\n" >> leaks.txt
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main >> leaks.txt 2>&1
	@echo "$(GREEN)Valgrind results stored in leaks.txt$(EOC)"

clean:
	@echo "$(WHITE)Cleaning object files...$(EOC)"
	@$(RM) $(OBJDIR)
	@echo "$(YELLOW)All object files were removed.$(EOC)"

fclean: clean
	@echo "$(WHITE)Removing $(NAME)...$(EOC)"
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) has been deleted.$(EOC)"

re: fclean all

.PHONY: all clean fclean re valgrind test compile_test
