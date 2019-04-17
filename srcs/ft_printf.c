/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:34 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 20:36:27 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MAX_ADDED 1


t_ht    *ft_create_table(void)
{
    t_ht *hash_table;
    char d;

    d = 'd';
    hash_table = ft_ht_create(7 * sizeof(t_node_ht *));
    ft_ht_add(hash_table, "%", (void *)(&ft_printf_arg_percentage));
    ft_ht_add(hash_table, "c", (void *)(&ft_printf_arg_c));
    ft_ht_add(hash_table, "d", (void *)(&ft_printf_arg_d));
    ft_ht_add(hash_table, "oxXu", (void *)(&ft_printf_arg_oxXu));
    ft_ht_add(hash_table, "p", (void *)(&ft_printf_arg_p));
    ft_ht_add(hash_table, "s", (void *)(&ft_printf_arg_s));

    return(hash_table);
};


int ft_printf(const char* format, ...)
{
    va_list ap;
    size_t  n;
    size_t  i;
    size_t  format_len;
    size_t  len;
    char    *flag;

    t_ht *hash_table;

    hash_table = ft_create_table();
    format_len = ft_strlen(format);
    flag = (char *)malloc((format_len + MAX_ADDED + 1) * sizeof(char));
	if (flag == NULL)
		return (-1);
    n = ft_count_variable(format);
    va_start(ap, format);
    i = 0;
	len = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            bzero((void *)flag, format_len + MAX_ADDED + 1);
            flag = ft_strncpy(flag, format + i, (int)ft_flaglen(format + i) + 1);
            ft_printf_arg(&ap, flag, &len, hash_table);
            i += (int)ft_flaglen(format + i);
        }
        else
        {
            ft_putchar(format[i]);
            len += 1;
        }
        i++;
    }
    free(flag);
    flag = NULL;
    va_end(ap);
    return (len);
}