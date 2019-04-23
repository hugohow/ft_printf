/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_zeros_oxXu.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:06:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 18:07:22 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static char *add_one_zero(char *str, t_flag *flag, int sign)
{
    // char *output;
    int i;

    i = 0;
    if (flag->hash == 1 && sign != 0)
    {
        while (str[i])
        {
            if (str[i] == '0')
            {
                i++;
                if (flag->conv == 'o')
                {
                    return (ft_add_element(str, flag, i));
                }
                else if (flag->conv == 'x')
                {
                    i++;
                    return (ft_add_element(str, flag, i));
                }
                else if (flag->conv == 'X')
                {
                    i++;
                    return (ft_add_element(str, flag, i));
                }
            }
            i++;
        }
    }
    else
    {
        while (str[i])
        {
            if (ft_isdigit(str[i]) || ft_isalpha(str[i]))
            {
                return (ft_add_element(str, flag, i));
            }
            i++;
        }
        // tu recherches le premier 0

    }
    return (str);
}

char *ft_add_zeros_oxXu(char *str, t_flag *flag, int sign)
{
    // printf("\npour : %s, la preicision est de  : %d\n", str, ft_count_current_precision_oxXu(str, flag, sign));
    // printf("\npour : %s, la precision voulue est de  : %d\n", str, flag->precision);

    // la precision voulue est bien
    if (ft_count_current_precision_oxXu(str, flag, sign) == flag->precision)
        return (str);
    
    // il faut ajouter du gras
    str = add_one_zero(str, flag, sign);
    return (ft_add_zeros_oxXu(str, flag, sign));
}