/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:16:11 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 20:41:57 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_delete_element(char *str, t_flag *flag, int i)
{
    if (flag->minus == 1)
    {
        ft_str_left_shift(str + i, (int)ft_strlen(str + i) - 1);
    }
    else
    {
        str = ft_str_right_shift(str, i);
    }
    return (str);
}