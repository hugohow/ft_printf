/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:50:40 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 19:09:26 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include "ht.h"

# define PREFIX_0X_MAJ "0X"
# define PREFIX_0X "0x"
# define PREFIX_0 "0"
# define GOT_PLUS(flag, sign) (flag->plus == 1 && sign >= 0)
# define GOT_SPACE(flag, sign) (flag->plus == 0 && flag->space == 1 && sign >= 0)
# define GOT_PREFIX(flag, sign) (flag->hash && sign != 0)
# define GOT_MINUS(flag, sign) (sign < 0)
# define FILL_TO_THE_LEFT(flag, sign) (flag->zero == 1 && flag->minus == 0)
# define FILL_TO_THE_RIGHT(flag, sign) (!(FILL_TO_THE_LEFT(flag, sign)))
# define FILL_WITH_ZEROS(flag, sign) (FILL_TO_THE_LEFT(flag, sign) && flag->precision == -1)
# define BASE_O "01234567"
# define BASE_X "0123456789abcdef"
# define BASE_X_MAJ "0123456789ABCDEF"
# define PERCENTAGE "%"


#define LENGTH_H (1 << 1)
#define LENGTH_HH (1 << 2)
#define LENGTH_L (1 << 3)
#define LENGTH_LL (1 << 4)
#define LENGTH_J (1 << 5)
#define LENGTH_Z (1 << 6)
#define LENGTH_L_MAJ (1 << 7)

#define KEY_PERCENTAGE (1 << 1)
#define KEY_C (1 << 2)
#define KEY_D (1 << 3)
#define KEY_NB (1 << 4)
#define KEY_P (1 << 5)
#define KEY_S (1 << 6)
#define KEY_F (1 << 7)
# define NUMERICAL_VALUE(flag) ((flag->key & KEY_NB) || (flag->key & KEY_D))

typedef struct	s_flag
{
	int key;
	int length;
	char conv;
	int precision;
	unsigned int width;
	int zero;
	int plus;
	int minus;
	int space;
	int hash;
}				t_flag;


typedef char *(t_ft)(va_list *, t_flag *);


typedef struct	s_ft_convert
{
	int key;
	int length;
	t_ft *fct;
}				t_ft_convert;

char *ft_convert_base(char *decimal, char *base);
char    *ft_itoa_ll(long long nb);

size_t ft_count_variable(const char *format);
size_t ft_flaglen(const char *str);
char *ft_apply_padding_p(char *str, t_flag *flag, int sign);
char *ft_apply_padding(char *str, t_flag *flag, int sign);
wchar_t *ft_apply_padding_w(wchar_t *str, t_flag *flag);

char *ft_apply_precision(char *str, t_flag *flag, int sign);
char *ft_apply_precision_p(char *str, int precision);

size_t  ft_wcslen(const wchar_t *str);

void ft_wputstr(wchar_t const *str);
wchar_t *ft_wstrjoin(wchar_t const *str1, wchar_t const *str2);
wchar_t *ft_wstrsub(wchar_t const *str, unsigned int start, size_t len);
int     get_length(char *flag);
void	ft_printf_arg(va_list *ap, char *str, size_t *len);
t_flag *ft_create_flag(char *str);

int ft_flag_get_space(char *flag);
int ft_flag_get_hash(char *flag);
int ft_flag_get_length(char *flag);
int ft_flag_get_minus(char *flag);
int ft_flag_get_plus(char *flag);
int ft_flag_get_precision(char *flag);
int ft_flag_get_width(char *flag);
int ft_flag_get_zero(char *flag);
int	ft_flag_get_key(char *flag);
void ft_print_flag(t_flag *flag);
int ft_printf(const char* format, ...);
int	ft_count_current_precision(char *str, t_flag *flag, int sign);

char *ft_add_zeros(char *str, t_flag *flag, int sign);
char *ft_delete_zeros(char *str, t_flag *flag, int sign);
char			*ft_strcat(char *s1, const char *s2);
int ft_prefix_len(t_flag *flag, int sign);
int ft_get_size_to_allocate(size_t original_nblen, t_flag *flag);

char *ft_convert_d(va_list *ap, t_flag *flag);
char *ft_convert_d_l(va_list *ap, t_flag *flag);
char *ft_convert_d_ll(va_list *ap, t_flag *flag);
char *ft_convert_d_h(va_list *ap, t_flag *flag);
char *ft_convert_d_hh(va_list *ap, t_flag *flag);
char *ft_convert_percent(va_list *ap, t_flag *flag);
char *ft_convert_nb(va_list *ap, t_flag *flag);
char *ft_convert_nb_l(va_list *ap, t_flag *flag);
char *ft_convert_nb_ll(va_list *ap, t_flag *flag);
char *ft_convert_nb_hh(va_list *ap, t_flag *flag);
char *ft_convert_nb_h(va_list *ap, t_flag *flag);

char *ft_convert_f(va_list *ap, t_flag *flag);
char *ft_convert_f_l_maj(va_list *ap, t_flag *flag);


char *ft_convert_s(va_list *ap, t_flag *flag);
char *ft_convert_c(va_list *ap, t_flag *flag);
char *ft_convert_p(va_list *ap, t_flag *flag);

char			*ft_convert_output(char *str, t_flag *flag);

size_t	ft_nblen_ull(unsigned long long nb);
char *ft_ulltoa_offset(unsigned long long nb, size_t size_allocation);
#endif