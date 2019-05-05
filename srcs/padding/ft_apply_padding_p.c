/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding_p.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:49:41 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/01 13:54:01 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static char         *ft_add_prefix(char *str)
{
    str = ft_strcat_r(PREFIX_0X, str);
    return (str);
}

static char         *ft_add_sign(char *str, t_flag *flag, int sign)
{
	if (GOT_PLUS(flag, sign))
		str = ft_strcat_r("+", str);
	if (GOT_MINUS(flag, sign))
		str = ft_strcat_r("-", str);
	if (GOT_SPACE(flag, sign))
		str = ft_strcat_r(" ", str);
	return (str);
}

static              size_t get_size_to_add(char *str, t_flag *flag, int sign)
{
    unsigned int    str_len;

    str_len = 0;
    if (str)
    {

    }
    // if (NUMERICAL_VALUE(flag) == 0)
    //     return (str_len);
    if (GOT_PLUS(flag, sign))
        str_len++;
    if (GOT_MINUS(flag, sign))
        str_len++;
	if (GOT_SPACE(flag, sign))
		str_len++;
    str_len += 2;
    return (str_len);
}

static char         *str_to_fill(char *str, t_flag *flag, int sign)
{
	char            *to_add;
    unsigned int    to_add_len;
    unsigned int    i;

    to_add_len = get_size_to_add(str, flag, sign);
    if (to_add_len + ft_strlen(str) >= flag->width)
        return (ft_strdup(""));
    if (!(to_add = (char *)malloc(sizeof(*to_add) * (flag->width + 2))))
        return (NULL);
    i = 0;
    while (to_add_len + ft_strlen(str) + i < flag->width)
    {
        to_add[i] = FILL_WITH_ZEROS(flag, sign) ? '0' : ' ';
        i++;
    }
    to_add[i] = '\0';
    return (to_add);
}

static char         *ft_strcat_r_char(char c, char *dst, size_t len)
{
	size_t          len_dst;

	len_dst = ft_strlen(dst);
	ft_memmove(dst + len, dst, len_dst);
	ft_memset(dst, c, len);
	dst[len_dst + len] = '\0';
	return (dst);
}


char                *ft_apply_padding_p(char *str, t_flag *flag, int sign)
{
    char            *to_add;
	
    to_add = str_to_fill(str, flag, sign);
    if (FILL_WITH_ZEROS(flag, sign))
    {
        str = ft_strcat_r(to_add, str);
        str = ft_add_prefix(str);
    }
	else
	{
		str = ft_add_sign(str, flag, sign);
		str = ft_add_prefix(str);
		if (flag->minus == 1)
			str = ft_strcat(str, to_add);
		else
			str = ft_strcat_r_char(to_add[0], str, ft_strlen(to_add));
	}
    return (str);
}