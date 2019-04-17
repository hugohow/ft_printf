/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:28:50 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 19:55:13 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_d(va_list *ap, char *str, size_t *len, t_flag *flag)
{
    // no -> 0
    // hh -> 1
    // h -> 2
    // l -> 3
    // ll -> 4
    // j -> 5
    // z -> 6
	if (str)
	{

	}
	char *output;
	if (flag->length == 0)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 1)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 2)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 3)
	{
		long tmp;
		int sign;
		tmp = va_arg(*ap, long);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 4)
	{
		long long tmp;
		int sign;
		tmp = va_arg(*ap, long long);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 5)
	{
		intmax_t tmp;
		int sign;
		tmp = va_arg(*ap, intmax_t);
		output = ft_ulltoa((unsigned long long)(tmp < 0 ? -tmp : tmp));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
	else if (flag->length == 6)
	{
		size_t tmp;
		int sign;
		tmp = va_arg(*ap, size_t);
		output = ft_ulltoa((unsigned long long)(tmp));
		sign = 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
}
