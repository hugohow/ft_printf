/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_s.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:18:01 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/01 13:49:10 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_apply_precision_s(char *str, t_flag *flag, int sign)
{
    unsigned int str_len;
    str_len = ft_strlen(str);

    if (sign == 0 && flag->precision == 0)
        return (ft_strcpy(str, ""));
    if (flag->precision < 0)
        return (str);
	str[flag->precision] = '\0';
	return (str);
}
