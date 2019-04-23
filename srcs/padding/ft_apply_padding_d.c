/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding_d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:50:40 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 17:41:54 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



static char *ft_add_sign(char *str, t_flag *flag, int sign)
{
	if (GOT_PLUS(flag, sign))
		str = ft_strcat_r("+", str);
	if (GOT_MINUS(flag, sign))
		str = ft_strcat_r("-", str);
	if (GOT_SPACE(flag, sign))
		str = ft_strcat_r(" ", str);
	return (str);
}

static char *str_to_fill(char *str, t_flag *flag, int sign)
{
	char *to_add;
    unsigned int str_len;
    unsigned int i;

    str_len = ft_strlen(str);


    if (GOT_PLUS(flag, sign))
        str_len++;
    if (GOT_MINUS(flag, sign))
        str_len++;
    if (GOT_SPACE(flag, sign))
        str_len++;
	
    to_add = (char *)malloc((flag->width + 2) * sizeof(char));
    i = 0;
    if (flag->width > str_len)
    {
        while (i + str_len < flag->width)
        {
            if (FILL_WITH_ZEROS(flag, sign))
                to_add[i++] = '0';
            else
                to_add[i++] = ' ';
        }
    }
    to_add[i] = '\0';
	return (to_add);
}


char *ft_apply_padding_d(char *str, t_flag *flag, int sign)
{
    char *to_add;
	
    to_add = str_to_fill(str, flag, sign);

    if (FILL_WITH_ZEROS(flag, sign))
    {
        str = ft_strcat_r(to_add, str);
		str = ft_add_sign(str, flag, sign);
    }
	else
	{
		str = ft_add_sign(str, flag, sign);

		if (flag->minus == 1)
			str = ft_strcat(str, to_add);
		else
			str = ft_strcat_r(to_add, str);
	}

    return (str);
}