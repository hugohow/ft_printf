/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_oxXu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:31:19 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/25 17:30:11 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_convert_output(char *str, t_flag *flag)
{
    char *output;

    if (flag->conv == 'o')
    {
        output = ft_convert_base(str, BASE_O);
        ft_memdel((void **)&str);
    }
    if (flag->conv == 'x')
    {
        output = ft_convert_base(str, BASE_X);
        ft_memdel((void **)&str);
    }
    if (flag->conv == 'X')
    {
        output = ft_convert_base(str, BASE_X_MAJ);
        ft_memdel((void **)&str);
    }
    return (output);
}

void	ft_printf_arg_oxXu(va_list *ap, char *str, size_t *len, t_flag *flag)
{
	if (str)
	{

	}
        char *output;
        if (flag->length == 0)
        {
            unsigned int tmp;
            int sign;
            tmp = va_arg(*ap, unsigned int);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 1)
        {
            unsigned int tmp;
            int sign;
            tmp = va_arg(*ap, unsigned int);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 2)
        {
            unsigned int tmp;
            int sign;
            tmp = va_arg(*ap, unsigned int);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 3)
        {
            unsigned long tmp;
            int sign;
            tmp = va_arg(*ap, unsigned long);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 4)
        {
            unsigned long long tmp;
            int sign;
            tmp = va_arg(*ap, unsigned long long);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 5)
        {
            uintmax_t tmp;
            int sign;
            tmp = va_arg(*ap, uintmax_t);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
        else if (flag->length == 6)
        {
            size_t tmp;
            int sign;
            tmp = va_arg(*ap, size_t);
            output = ft_ulltoa((unsigned long long)(tmp));
            output = ft_convert_output(output, flag);
            sign = tmp != 0;
            output = ft_apply_padding(output, flag, sign);
            output = ft_apply_precision(output, flag, sign);
            ft_putstr(output);
            *len += ft_strlen(output);
            ft_memdel((void **)&output);
        }
}
