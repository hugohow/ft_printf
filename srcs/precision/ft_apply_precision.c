/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:11:14 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 17:27:52 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char *ft_apply_precision_null(char **p_str, t_flag *flag)
// {
//     // very special case
//     if (flag->conv == 'o')
//         return (ft_strcpy(*p_str, "0"));;
//     if (flag->plus)
//         return (ft_strcpy(*p_str, "+"));
//     if (flag->space)
//         return (ft_strcpy(*p_str, " "));
//     return (ft_strcpy(*p_str, ""));
// }

char *ft_apply_precision(char *str, t_flag *flag, int sign)
{
    int offset;
    unsigned int str_len;
    str_len = ft_strlen(str);


    if (sign == 0 && flag->precision == 0)
        return (ft_strcpy(str, ""));
    if (flag->precision < 0)
        return (str);
    if (str_len == (unsigned int)flag->precision)
        return (str);
    offset = 0;
    if (ft_str_precision_count(str, offset) > flag->precision)
        return (str);
    if (ft_str_precision_count(str, offset) < flag->precision)
        return (ft_add_zeros(str, flag, sign));
    return (str);
}
