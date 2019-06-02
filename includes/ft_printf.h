/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:50:40 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 11:39:49 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

# define PREFIX_0X_MAJ "0X"
# define PREFIX_0X "0x"
# define PREFIX_0 "0"
# define BASE_O "01234567"
# define BASE_X "0123456789abcdef"
# define BASE_X_MAJ "0123456789ABCDEF"
# define BASE_B "01"
# define PERCENTAGE "%"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_RESET   "\x1b[0m"

# define LENGTH_H (1 << 1)
# define LENGTH_HH (1 << 2)
# define LENGTH_L (1 << 3)
# define LENGTH_LL (1 << 4)
# define LENGTH_J (1 << 5)
# define LENGTH_Z (1 << 6)
# define LENGTH_L_MAJ (1 << 7)

# define KEY_PERCENTAGE (1 << 1)
# define KEY_C (1 << 2)
# define KEY_D (1 << 3)
# define KEY_NB (1 << 4)
# define KEY_P (1 << 5)
# define KEY_S (1 << 6)
# define KEY_F (1 << 7)


#define HALF_POWER_0 "1"
#define HALF_POWER_1 "0.5"
#define HALF_POWER_2 "0.25"
#define HALF_POWER_3 "0.125"
#define HALF_POWER_4 "0.0625"
#define HALF_POWER_5 "0.03125"
#define HALF_POWER_6 "0.015625"
#define HALF_POWER_7 "0.0078125"
#define HALF_POWER_8 "0.00390625"
#define HALF_POWER_9 "0.001953125"
#define HALF_POWER_10 "0.0009765625"
#define HALF_POWER_11 "0.00048828125"
#define HALF_POWER_12 "0.000244140625"
#define HALF_POWER_13 "0.0001220703125"
#define HALF_POWER_14 "0.00006103515625"
#define HALF_POWER_15 "0.000030517578125"
#define HALF_POWER_16 "0.0000152587890625"
#define HALF_POWER_17 "0.00000762939453125"
#define HALF_POWER_18 "0.000003814697265625"
#define HALF_POWER_19 "0.0000019073486328125"
#define HALF_POWER_20 "0.00000095367431640625"
#define HALF_POWER_21 "0.000000476837158203125"
#define HALF_POWER_22 "0.0000002384185791015625"
#define HALF_POWER_23 "0.00000011920928955078125"
#define HALF_POWER_24 "0.000000059604644775390625"
#define HALF_POWER_25 "0.0000000298023223876953125"
#define HALF_POWER_26 "0.00000001490116119384765625"
#define HALF_POWER_27 "0.000000007450580596923828125"
#define HALF_POWER_28 "0.0000000037252902984619140625"
#define HALF_POWER_29 "0.00000000186264514923095703125"
#define HALF_POWER_30 "0.000000000931322574615478515625"
#define HALF_POWER_31 "0.0000000004656612873077392578125"
#define HALF_POWER_32 "0.00000000023283064365386962890625"
#define HALF_POWER_33 "0.000000000116415321826934814453125"
#define HALF_POWER_34 "0.0000000000582076609134674072265625"
#define HALF_POWER_35 "0.00000000002910383045673370361328125"
#define HALF_POWER_36 "0.000000000014551915228366851806640625"
#define HALF_POWER_37 "0.0000000000072759576141834259033203125"
#define HALF_POWER_38 "0.00000000000363797880709171295166015625"
#define HALF_POWER_39 "0.000000000001818989403545856475830078125"
#define HALF_POWER_40 "0.0000000000009094947017729282379150390625"
#define HALF_POWER_41 "0.00000000000045474735088646411895751953125"
#define HALF_POWER_42 "0.000000000000227373675443232059478759765625"
#define HALF_POWER_43 "0.0000000000001136868377216160297393798828125"
#define HALF_POWER_44 "0.00000000000005684341886080801486968994140625"
#define HALF_POWER_45 "0.000000000000028421709430404007434844970703125"
#define HALF_POWER_46 "0.0000000000000142108547152020037174224853515625"
#define HALF_POWER_47 "0.00000000000000710542735760100185871124267578125"
#define HALF_POWER_48 "0.000000000000003552713678800500929355621337890625"
#define HALF_POWER_49 "0.0000000000000017763568394002504646778106689453125"
#define HALF_POWER_50 "0.00000000000000088817841970012523233890533447265625"
#define HALF_POWER_51 "0.000000000000000444089209850062616169452667236328125"
#define HALF_POWER_52 "0.0000000000000002220446049250313080847263336181640625"
#define HALF_POWER_53 "0.00000000000000011102230246251565404236316680908203125"
#define HALF_POWER_54 "0.000000000000000055511151231257827021181583404541015625"
#define HALF_POWER_55 "0.0000000000000000277555756156289135105907917022705078125"
#define HALF_POWER_56 "0.00000000000000001387778780781445675529539585113525390625"
#define HALF_POWER_57 "0.000000000000000006938893903907228377647697925567626953125"
#define HALF_POWER_58 "0.0000000000000000034694469519536141888238489627838134765625"
#define HALF_POWER_59 "0.00000000000000000173472347597680709441192448139190673828125"
#define HALF_POWER_60 "0.000000000000000000867361737988403547205962240695953369140625"
#define HALF_POWER_61 "0.0000000000000000004336808689942017736029811203479766845703125"
#define HALF_POWER_62 "0.00000000000000000021684043449710088680149056017398834228515625"
#define HALF_POWER_63 "0.000000000000000000108420217248550443400745280086994171142578125"
#define HALF_POWER_64 "0.0000000000000000000542101086242752217003726400434970855712890625"

typedef struct		s_flag
{
	int				key;
	int				length;
	char			conv;
	int				precision;
	unsigned int	width;
	int				zero;
	int				plus;
	int				minus;
	int				space;
	int				hash;
}					t_flag;

typedef char *			(t_ft)(va_list *, t_flag *);

typedef struct		s_ft_print
{
	int				key;
	int				length;
	t_ft			*fct;
}					t_ft_print;

typedef struct		s_color
{
	char			key[10];
	char			str[10];
}					t_color;


int					ft_printf(const char *format, ...);
int					ft_dprintf(int fd, const char *format, ...);

char			*ft_str_join_r(char *str1, const char *to_add, t_flag *flag);
char			*ft_str_join(const char *to_add, char *str1, t_flag *flag);

char				*ft_get_color(const char *str);
char				*ft_itoa_ll(long long nb);
size_t				ft_flaglen(const char *str);

char				*ft_apply_padding_p(char *str, t_flag *flag, int sign);
char				*ft_apply_padding_nb(char *str, t_flag *flag, int sign);
char				*ft_apply_padding_str(char *str, t_flag *flag, int sign);

char				*ft_apply_precision_nb(char *str, t_flag *flag, int sign);
char				*ft_apply_precision_str(char *str, t_flag *flag, int sign);
char				*ft_apply_precision_p(char *str, int precision);

size_t				ft_wcslen(const wchar_t *str);
void				ft_wputstr(wchar_t const *str);
wchar_t				*ft_wstrjoin(wchar_t const *str1, wchar_t const *str2);
wchar_t				*ft_wstrsub(wchar_t const *str, \
	unsigned int start, size_t len);
int					get_length(char *flag);
char		*ft_printf_arg(va_list *ap, char *str);
t_flag				*ft_create_flag(char *str);

int					ft_flag_get_space(char *flag);
int					ft_flag_get_hash(char *flag);
int					ft_flag_get_length(char *flag);
int					ft_flag_get_minus(char *flag);
int					ft_flag_get_plus(char *flag);
int					ft_flag_get_precision(char *flag);
int					ft_flag_get_width(char *flag);
int					ft_flag_get_zero(char *flag);
int					ft_flag_get_key(char *flag);
int					ft_count_current_precision(\
	char *str, t_flag *flag, int sign);

char				*ft_add_char(char *str, t_flag *flag, char c);
char				*ft_strcat(char *s1, const char *s2);
int					ft_get_size_to_allocate(\
	size_t original_nblen, t_flag *flag);

char				*ft_print_d(va_list *ap, t_flag *flag);
char				*ft_print_d_l(va_list *ap, t_flag *flag);
char				*ft_print_d_ll(va_list *ap, t_flag *flag);
char				*ft_print_d_h(va_list *ap, t_flag *flag);
char				*ft_print_d_hh(va_list *ap, t_flag *flag);
char				*ft_print_percent(va_list *ap, t_flag *flag);
char				*ft_print_nb(va_list *ap, t_flag *flag);
char				*ft_print_nb_l(va_list *ap, t_flag *flag);
char				*ft_print_nb_ll(va_list *ap, t_flag *flag);
char				*ft_print_nb_hh(va_list *ap, t_flag *flag);
char				*ft_print_nb_h(va_list *ap, t_flag *flag);

char				*ft_print_f(va_list *ap, t_flag *flag);
char				*ft_print_f_l(va_list *ap, t_flag *flag);
char				*ft_print_f_l_maj(va_list *ap, t_flag *flag);

char				*ft_print_s(va_list *ap, t_flag *flag);
char				*ft_print_c(va_list *ap, t_flag *flag);
char				*ft_print_p(va_list *ap, t_flag *flag);

char				*ft_convert_output(char *str, t_flag *flag);

size_t				ft_nblen_ull(unsigned long long nb);
char				*ft_ulltoa_offset(\
	unsigned long long nb, size_t size_allocation);
int					ft_str_precision_count(char *str, int offset);
char 				*ft_itoa_f_l(long double nb, char *floating_str, t_flag *flag, int size_allocation);
char 				*ft_itoa_f(double nb, char *floating_str, t_flag *flag, int size_allocation);
char				*ft_get_binary(unsigned char c, char *tmp_str);
int					ft_can_apply_plus(t_flag *flag, int sign);
int					ft_can_apply_space(t_flag *flag, int sign);
int					ft_can_apply_prefix(t_flag *flag, int sign);
int				ft_can_apply_minus(t_flag *flag, int sign);
int 				ft_can_fill_to_the_left(t_flag *flag, int sign);
int 				ft_can_fill_to_the_right(t_flag *flag, int sign);
int 				ft_can_fill_with_zeros(t_flag *flag, int sign);
int 				ft_can_fill_with_zeros_float(t_flag *flag, int sign);
char				*ft_strdup_alloc(const char *s1, size_t size_allocation);
#endif
