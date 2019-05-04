/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:39:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/02 14:01:28 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_add_prefix(char *str, t_flag *flag, int sign)
{
    // size_t len;
    // char prefix[5];

    // len = flag->precision == -1 ? ft_strlen(str) : ft_strlen(str) + flag->precision;

    // if (flag->conv == 'o')
    //     ft_strncpy(prefix, PREFIX_0, len > ft_strlen(PREFIX_0) ? ft_strlen(PREFIX_0) : len);
    // if (flag->conv == 'x')
    //     ft_strncpy(prefix, PREFIX_0X, len > ft_strlen(PREFIX_0X) ? ft_strlen(PREFIX_0X) : len);
    // if (flag->conv == 'X')
    //     ft_strncpy(prefix, PREFIX_0X_MAJ, len > ft_strlen(PREFIX_0X_MAJ) ? ft_strlen(PREFIX_0X_MAJ) : len);

    // str = ft_strcat_r(prefix, str);
    if (flag->conv == 'o')
    {
        if (flag->precision == 0 && sign == 0 && (flag->hash))
        {
            str = ft_strcat_r(PREFIX_0, str);
            return (str);
        }
        if (str[0] != '0')
            str = ft_strcat_r(PREFIX_0, str);
    }
    if (flag->conv == 'x')
        if (str[0] != '0')
            str = ft_strcat_r(PREFIX_0X, str);
    if (flag->conv == 'X')
        if (str[0] != '0')
            str = ft_strcat_r(PREFIX_0X_MAJ, str);
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

static size_t get_size_to_add(char *str, t_flag *flag, int sign)
{
    unsigned int str_len;

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
    if (GOT_PREFIX(flag, sign))
        str_len += ft_prefix_len(flag, sign);
    return (str_len);
}

static char *str_to_fill(char *str, t_flag *flag, int sign)
{
	char *to_add;
    unsigned int to_add_len;
    unsigned int i;

    to_add_len = get_size_to_add(str, flag, sign);
    if (to_add_len + ft_strlen(str) >= flag->width)
        return (ft_strdup(""));
    to_add = (char *)malloc((flag->width + 2) * sizeof(char));
    if (to_add == NULL)
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

static char	*ft_strcat_r_char(char c, char *dst, size_t len)
{
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	ft_memmove(dst + len, dst, len_dst);
	ft_memset(dst, c, len);
	dst[len_dst + len] = '\0';
	return (dst);
}


char *ft_apply_padding(char *str, t_flag *flag, int sign)
{
    char *to_add;
	
    to_add = str_to_fill(str, flag, sign);

    if (NUMERICAL_VALUE(flag) == 0)
    {
		if (flag->minus == 1)
			str = ft_strcat(str, to_add);
		else
			str = ft_strcat_r_char(to_add[0], str, ft_strlen(to_add));
        return (str);
    }
    if (FILL_WITH_ZEROS(flag, sign))
    {
        str = ft_strcat_r(to_add, str);
        if (GOT_PREFIX(flag, sign))
            str = ft_add_prefix(str, flag, sign);
		str = ft_add_sign(str, flag, sign);
    }
	else
	{
		str = ft_add_sign(str, flag, sign);
		if (GOT_PREFIX(flag, sign))
			str = ft_add_prefix(str, flag, sign);
		if (flag->minus == 1)
			str = ft_strcat(str, to_add);
		else
			str = ft_strcat_r_char(to_add[0], str, ft_strlen(to_add));
	}

    ft_memdel((void **)&to_add);
    return (str);
}