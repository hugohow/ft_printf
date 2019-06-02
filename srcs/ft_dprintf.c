/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 21:10:04 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 13:54:27 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
static int ft_parse_and_print(char *flag_line, va_list *p_ap, size_t *p_len, int fd)
{
	int len;
	t_flag		*flag;
	char *output;
	
	len = 0;
	if (!(flag = ft_create_flag(flag_line)))
		return (-1);
	output = ft_printf_arg(p_ap, flag);
	if (flag->character == 0)
		*p_len = *p_len + (size_t)ft_print_null(flag, fd);
	else
	{
		ft_putstr_fd(output, fd);
		*p_len = *p_len + ft_strlen(output);
	}
	ft_memdel((void **)&flag);
	ft_memdel((void **)&output);
	return (0);
}

static void ft_print_general(const char *format, int *p_i, size_t *p_len, int fd)
{
	char *color;

	if (format[*p_i] == '{' && (\
		color = ft_get_color(format + *p_i + 1)) != 0)
	{
		ft_putstr_fd(color, fd);
		*p_i = *p_i + 1;
		while (format[*p_i] && format[*p_i] != '}')
			*p_i = *p_i + 1;
	}
	else
	{
		ft_putchar_fd(format[*p_i], fd);
		*p_len = *p_len + 1;
	}
}


int						ft_dprintf(int fd, const char *format, ...)
{
	va_list				ap;
	int					i;
	size_t				len;
	char				*flag_line;

	va_start(ap, format);
	i = -1;
	len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (!(flag_line = (char *)ft_memalloc((ft_strlen(format) + 1) * sizeof(char))))
				return (-1);
			flag_line = ft_strncpy(\
				flag_line, format + i, (int)ft_flaglen(format + i) + 1);
			if (ft_parse_and_print(flag_line, &ap, &len, fd) == -1)
				return (-1);
			i += (int)ft_flaglen(format + i);
			ft_memdel((void **)&flag_line);
		}
		else
			ft_print_general(format, &i, &len, fd);
	}
	va_end(ap);
	return (len);
}
