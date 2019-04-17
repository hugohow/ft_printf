/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:51:17 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 19:55:37 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_arg_s(va_list *ap, char *str, size_t *len, t_flag *flag)
{
	char *output;

	if (str)
	{

	}
	if (flag->length == 3)
	{
        wchar_t *woutput;
        woutput = va_arg(*ap, wchar_t*);
        if (flag->precision > 0 && (unsigned int)flag->precision < ft_wcslen(woutput))
            woutput = ft_wstrsub(woutput, 0, flag->precision);
        woutput = ft_apply_padding_w(woutput, flag);
		ft_wputstr(woutput);
    	*len += ft_wcslen(woutput);
	}
	else
	{
		output = va_arg(*ap, char*);
		if (flag->precision > 0 && (unsigned int)flag->precision < ft_strlen(output))
			output = ft_strsub(output, 0, flag->precision);
		if (flag->precision == 0)
			output = "";
		if (output == NULL)
			output = "(null)";
		output = ft_apply_padding(output, flag);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
}
