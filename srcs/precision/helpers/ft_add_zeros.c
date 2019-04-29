/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_zeros.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:06:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 14:49:05 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

// By default we push to the left, to optimize the space, but in a certains situations,
// you have to push to the right

static char *ft_add_element(char *str, t_flag *flag, int index)
{
    if (flag->minus == 1 || (str[0] != ' '))
    {
        return (ft_str_insert(str, '0', index));
    }
    else
    {

        ft_str_left_shift(str, index - 1);
        str[index] = '0';
        return (str); 
    }
}

static char *add_one_zero(char *str, t_flag *flag, int sign)
{
    int i;

    i = 0;
    if (sign)
    {

    }
    while (str[i])
    {
        if (ft_isdigit(str[i]) || ft_isalpha(str[i]))
        {
            i += 0;
            return (ft_add_element(str, flag, i));
        }
        i++;
    }
    return (str);
}

char *ft_add_zeros(char *str, t_flag *flag, int sign)
{
    int offset;

    offset = 0;
    if (ft_str_precision_count(str, offset) == flag->precision)
        return (str);
    str = add_one_zero(str, flag, sign);
    return (ft_add_zeros(str, flag, sign));
}