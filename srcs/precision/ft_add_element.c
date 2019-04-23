/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:17:28 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 20:41:53 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_add_element(char *str, t_flag *flag, int index)
{
    if (flag->minus == 0 && str[0] == ' ')
    {
        // si c'est vers la droite et aui'il y a un espace libre
        ft_str_left_shift(str, index);
        str[index] = '0';
        return (str); 
    }
    else
    {
        return (ft_str_insert(str, '0', index));
    }
}
