/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 21:13:47 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 12:47:02 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_sprintf(char *str, const char *format, ...)
{
	va_list				ap;
	size_t				i;
	size_t				format_len;
	size_t				len;
	char				*flag_line;
	char 				*color;
	if (str)
	{
		
	}
	format_len = ft_strlen(format);
	flag_line = (char *)ft_memalloc((format_len + 1) * sizeof(char));
	if (flag_line == NULL)
		return (-1);
	va_start(ap, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			char *output;

			ft_bzero((void *)flag_line, format_len + 1);
			flag_line = ft_strncpy(\
				flag_line, format + i, (int)ft_flaglen(format + i) + 1);
			t_flag		*flag;

			if (!(flag = ft_create_flag(flag_line)))
				return (-1);

			output = ft_printf_arg(&ap, flag);
			ft_putstr_fd(output, 1);
			len += (ft_strlen(output));
			ft_memdel((void **)&output);
			ft_memdel((void **)&flag);
			i += (int)ft_flaglen(format + i);
		}
		else if (format[i] == '{' && (\
			color = ft_get_color(format + i + 1)) != 0)
		{
			ft_putstr_fd(color, 1);
			i++;
			while (format[i] && format[i] != '}')
				i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len += 1;
		}
		i++;
	}
	va_end(ap);
	ft_memdel((void **)&flag_line);
	return (len);
}

