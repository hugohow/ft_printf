/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_current_precision.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:12:18 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 18:00:49 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_current_precision(char *str, t_flag *flag, int sign)
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
                while (str[i] && (ft_isdigit(str[i]) || ft_isalpha(str[i])))
                {
                    count++;
                    i++;
                }
                if (str[i] == '\0')
                    break;
            }
            i++;
        }
        return (count);
    }
    return (count);
}