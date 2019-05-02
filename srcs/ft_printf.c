/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:34 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/02 11:49:17 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MAX_ADDED 1





int ft_printf(const char* format, ...)
{
    va_list ap;
    size_t  n;
    size_t  i;
    size_t  format_len;
    size_t  len;
    char    *flag_line;

    format_len = ft_strlen(format);
    flag_line = (char *)ft_memalloc((format_len + 1) * sizeof(char));
	if (flag_line == NULL)
		return (-1);
    n = ft_count_variable(format);
    va_start(ap, format);
    i = 0;
	len = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            ft_bzero((void *)flag_line, format_len + 1);
            flag_line = ft_strncpy(flag_line, format + i, (int)ft_flaglen(format + i) + 1);
            ft_printf_arg(&ap, flag_line, &len);
            i += (int)ft_flaglen(format + i);
        }
        else
        {
            ft_putchar(format[i]);
            len += 1;
        }
        i++;
    }
    va_end(ap);
    ft_memdel((void **)&flag_line);
    return (len);
}