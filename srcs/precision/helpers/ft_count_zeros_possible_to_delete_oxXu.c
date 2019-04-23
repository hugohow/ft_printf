/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_zeros_possible_to_delete_oxXu.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:09:04 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 18:09:18 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_count_zeros_possible_to_delete_oxXu(char *str, t_flag *flag, int sign)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (flag->hash == 1 && sign != 0)
    {
        while (str[i])
        {
            if (str[i] == '0')
            {
                i++;
                if (flag->conv == 'o')
                {
                    while (str[i] && str[i] == '0')
                    {
                        count++;
                        i++;
                    }
                    break;
                }
                else if (flag->conv == 'x')
                {
                    i++;
                    while (str[i] && str[i] == '0')
                    {
                        count++;
                        i++;
                    }
                    break;
                }
                else if (flag->conv == 'X')
                {
                    i++;
                    while (str[i] && str[i] == '0')
                    {
                        count++;
                        i++;
                    }
                    break;
                }
            }
            i++;
        }
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