/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 21:13:47 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 16:28:27 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_parse_and_cat(char *flag_line, va_list *p_ap, \
size_t *p_len, char *str)
{
	int			len;
	t_flag		*flag;
	char		*output;

	len = 0;
	if (!(flag = ft_create_flag(flag_line)))
		return (-1);
	output = ft_printf_arg(p_ap, flag);
	if (flag->character == 0)
	{
		ft_memmove(str + *p_len, output, ft_strlen(output));
		*p_len = *p_len + ft_strlen(output);
		str[*p_len] = '\0';
		*p_len = *p_len + 1;
	}
	else
	{
		ft_memmove(str + *p_len, output, ft_strlen(output));
		*p_len = *p_len + ft_strlen(output);
	}
	ft_memdel((void **)&flag);
	ft_memdel((void **)&output);
	return (1);
}

static void		ft_print_general(const char *format, int *p_i, \
size_t *p_len, char *str)
{
	char		*color;

	if (format[*p_i] == '{' && (\
		color = ft_get_color(format + *p_i + 1)) != 0)
	{
		ft_memmove(str + *p_len, color, ft_strlen(color));
		*p_i = *p_i + 1;
		while (format[*p_i] && format[*p_i] != '}')
			*p_i = *p_i + 1;
	}
	else
	{
		ft_memmove(str + *p_len, &format[*p_i], 1);
		*p_len = *p_len + 1;
	}
}

int				ft_sprintf(char *str, const char *format, ...)
{
	va_list		ap;
	int			i;
	size_t		len;
	char		*flag_line;

	va_start(ap, format);
	i = -1;
	len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (!(flag_line = (char *)ft_memalloc((ft_strlen(format) + 1) * sizeof(char))))
				return (-1);
			flag_line = ft_strncpy(flag_line, format + i, (int)ft_flaglen(format + i) + 1);
			if (ft_parse_and_cat(flag_line, &ap, &len, str) == -1)
				return (-1);
			i += (int)ft_flaglen(format + i);
			ft_memdel((void **)&flag_line);
		}
		else
			ft_print_general(format, &i, &len, str);
	}
	va_end(ap);
	return (len);
}
