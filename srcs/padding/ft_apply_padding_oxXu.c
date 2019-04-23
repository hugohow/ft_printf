/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding_oxXu.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:39:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 17:41:44 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_add_prefix(char *str, char conv)
{
    if (conv == 'o')
        str = ft_strcat_r(PREFIX_0, str);
    if (conv == 'x')
        str = ft_strcat_r(PREFIX_0x, str);
    if (conv == 'X')
        str = ft_strcat_r(PREFIX_0X, str);
    return (str);
}

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
    if (GOT_PREFIX(flag, sign))
    {
		if (flag->conv == 'o')
			str_len += 1;
		if (flag->conv == 'x' || flag->conv == 'X')
			str_len += 2;
    }
	
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


char *ft_apply_padding_oxXu(char *str, t_flag *flag, int sign)
{
    char *to_add;
	
    to_add = str_to_fill(str, flag, sign);

    if (FILL_WITH_ZEROS(flag, sign))
    {
        str = ft_strcat_r(to_add, str);
        if (GOT_PREFIX(flag, sign))
            str = ft_add_prefix(str, flag->conv);
		str = ft_add_sign(str, flag, sign);
    }
	else
	{
		str = ft_add_sign(str, flag, sign);
		if (GOT_PREFIX(flag, sign))
			str = ft_add_prefix(str, flag->conv);

		if (flag->minus == 1)
			str = ft_strcat(str, to_add);
		else
			str = ft_strcat_r(to_add, str);
	}

    return (str);
}