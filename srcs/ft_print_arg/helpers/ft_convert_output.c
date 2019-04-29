/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_output.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:12:43 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 18:55:34 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_output(char *str, t_flag *flag)
{
    char *output;

    if (flag->conv == 'o')
    {
        output = ft_convert_base(str, BASE_O);
        // ft_memdel((void **)&str);
        return (output);
    }
    if (flag->conv == 'x')
    {
        output = ft_convert_base(str, BASE_X);
        // ft_memdel((void **)&str);
        return (output);
    }
    if (flag->conv == 'X')
    {
        output = ft_convert_base(str, BASE_X_MAJ);
        // ft_memdel((void **)&str);
        return (output);
    }
    return (str);
}