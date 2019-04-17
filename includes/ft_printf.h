/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:50:40 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 20:29:15 by hhow-cho         ###   ########.fr       */
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

# define PREFIX_0X "0X"
# define PREFIX_0x "0x"
# define PREFIX_0 "0"
# define GOT_PLUS(flag, sign) (flag->plus == 1 && sign >= 0)
# define GOT_SPACE(flag, sign) (flag->plus == 0 && flag->space == 1 && sign >= 0)
# define GOT_PREFIX(flag, sign) (flag->hash && sign != 0)
# define GOT_MINUS(flag, sign) (sign < 0)
# define FILL_WITH_ZEROS(flag, sign) (flag->zero == 1 && flag->minus == 0)
# define BASE_O "01234567"
# define BASE_X "0123456789abcdef"
# define BASE_X_MAJ "0123456789ABCDEF"
# define PERCENTAGE "%"

typedef struct	s_flag
{
	char key[5];
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

typedef void (*t_ft)(va_list *, char *, size_t *, t_flag *);

char *ft_convert_base(char *decimal, char *base);
char    *ft_itoa_ll(long long nb);

size_t ft_count_variable(const char *format);
size_t ft_flaglen(const char *str);
char *ft_apply_padding(char *str, t_flag *flag);
char *ft_apply_padding_p(char *str, t_flag *flag, int sign);

char *ft_apply_precision(char *str, t_flag *flag, int sign);
char *ft_apply_precision_p(char *str, int precision);
char *ft_apply_padding_d(char *str, t_flag *flag, int sign);
wchar_t *ft_apply_padding_w(wchar_t *str, t_flag *flag);

size_t  ft_wcslen(const wchar_t *str);

void ft_wputstr(wchar_t const *str);
wchar_t *ft_wstrjoin(wchar_t const *str1, wchar_t const *str2);
wchar_t *ft_wstrsub(wchar_t const *str, unsigned int start, size_t len);
int     get_length(char *flag);
void	ft_printf_arg(va_list *ap, char *str, size_t *len, t_ht *hash_table);
void	ft_printf_arg_s(va_list *ap, char *str, size_t *len, t_flag *flag);
void	ft_printf_arg_c(va_list *ap, char *str, size_t *len, t_flag *flag);
void	ft_printf_arg_d(va_list *ap, char *str, size_t *len, t_flag *flag);
void	ft_printf_arg_oxXu(va_list *ap, char *str, size_t *len, t_flag *flag);
void	ft_printf_arg_p(va_list *ap, char *str, size_t *len, t_flag *flag);
void	ft_printf_arg_percentage(va_list *ap, char *str, size_t *len, t_flag *flag);
t_flag *ft_create_flag(char *str);

int ft_flag_get_space(char *flag);
int ft_flag_get_hash(char *flag);
int ft_flag_get_length(char *flag);
int ft_flag_get_minus(char *flag);
int ft_flag_get_plus(char *flag);
int ft_flag_get_precision(char *flag);
int ft_flag_get_width(char *flag);
int ft_flag_get_zero(char *flag);
char *ft_flag_get_key(char *flag);
void ft_print_flag(t_flag *flag);
int ft_printf(const char* format, ...);
int	ft_count_current_precision(char *str, t_flag *flag, int sign);

int ft_count_zeros_possible_to_delete(char *str, t_flag *flag, int sign);
char *ft_add_element(char *str, t_flag *flag, int i);
char *ft_add_zeros(char *str, t_flag *flag, int sign);
int	ft_count_current_precision(char *str, t_flag *flag, int sign);
char *ft_delete_element(char *str, t_flag *flag, int i);
char *ft_delete_zeros(char *str, t_flag *flag, int sign);
char			*ft_strcat(char *s1, const char *s2);
#endif