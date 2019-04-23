/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_zeros_possible_to_delete.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:18:21 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 18:09:35 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_count_zeros_possible_to_delete(char *str, t_flag *flag, int sign)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (flag->hash == 1 && sign != 0)
    {
        return (count);
    }
    else
    {
        while (str[i])
        {
            if (ft_isdigit(str[i]) || ft_isalpha(str[i]))
            {
                if (str[i] == '0')
                    count++;
                else
                    break;
            }
            i++;
        }
        return (count);
    }
    return (count);
}