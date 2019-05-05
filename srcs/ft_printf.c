/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:34 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/05 16:54:22 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MAX_ADDED 1

static const t_color tab_colors[] = 
{
    {"cyan", ANSI_COLOR_CYAN},
	{"red", ANSI_COLOR_RED},
	{"green", ANSI_COLOR_GREEN},
	{"yellow", ANSI_COLOR_YELLOW},
	{"blue", ANSI_COLOR_BLUE},
	{"magenta", ANSI_COLOR_MAGENTA},
	{"eoc", ANSI_COLOR_RESET},
	{"", ""},
};

int get_and_apply_color(const char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[len] && str[len] != '}')
		len++;
	if (len == 0)
		return (0);
	while ((tab_colors[i].key)[0])
	{
		if (ft_strncmp(tab_colors[i].key, str, len) == 0)
		{
			ft_putstr_fd(tab_colors[i].str, 1);
			return (len);
		}
		i++;
	}
	return (0);
}

int ft_printf(const char* format, ...)
{
    va_list ap;
    size_t  n;
    size_t  i;
    size_t  format_len;
    size_t  len;
	int ret;
    char    *flag_line;

    format_len = ft_strlen(format);
    flag_line = (char *)ft_memalloc((format_len + 1) * sizeof(char));
	if (flag_line == NULL)
		return (-1);
    n = ft_count_variable(format);
    va_start(ap, format);
    i = 0;
	len = 0;
	ret = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            ft_bzero((void *)flag_line, format_len + 1);
            flag_line = ft_strncpy(flag_line, format + i, (int)ft_flaglen(format + i) + 1);
            ft_printf_arg(&ap, flag_line, &len);
            i += (int)ft_flaglen(format + i);
        }
		else if (format[i] == '{' && (ret = get_and_apply_color(format + i + 1)) != 0)
        {
			i += ret + 1;
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
