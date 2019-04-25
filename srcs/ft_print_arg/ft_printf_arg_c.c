/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:25:17 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/25 17:15:59 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_c(va_list *ap, char *str, size_t *len, t_flag *flag)
{

	if (str)
	{

	}
	if (flag->length == 3)
	{
		wchar_t *woutput;
		woutput = (wchar_t *)malloc(2 * sizeof(wchar_t));
		woutput[0] = (wchar_t)va_arg(*ap, int);
		woutput[1] = L'\0';
		woutput = ft_apply_padding_w(woutput, flag);
		ft_wputstr(woutput);
		*len += ft_wcslen(woutput);
	}
	else
	{
		char *output;
		output = malloc(2 * sizeof(char));
		output[0] = (char)va_arg(*ap, int);
		output[1] = '\0';
		if (output[0] == '\0' || output[0] == 0)
			*len += 1;
		output = ft_apply_padding(output, flag, 1);
		ft_putstr(output);
		*len += ft_strlen(output);
	}
}
