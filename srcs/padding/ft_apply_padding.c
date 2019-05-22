/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:39:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/22 23:52:56 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*ft_str_join(const char *to_add, char *str1, t_flag *flag)
{
	char			*output;
	size_t			size_allocation;
	int				k;
	int				i;

	size_allocation = ft_get_size_to_allocate(\
		ft_strlen(str1) + ft_strlen(to_add), flag);
	if (!(output = (char *)malloc(sizeof(*output) * (size_allocation + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (to_add[i])
		output[k++] = to_add[i++];
	i = 0;
	while (str1[i])
		output[k++] = str1[i++];
	output[k] = 0;
	ft_memdel((void **)&str1);
	return (output);
}

static char			*ft_str_join_r(char *str1, const char *to_add, t_flag *flag)
{
	char			*output;
	size_t			size_allocation;
	int				k;
	int				i;

	size_allocation = ft_get_size_to_allocate(\
		ft_strlen(str1) + ft_strlen(to_add), flag);
	if (!(output = (char *)malloc(sizeof(*output) * (size_allocation + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (str1[i])
		output[k++] = str1[i++];
	i = 0;
	while (to_add[i])
		output[k++] = to_add[i++];
	output[k] = 0;
	ft_memdel((void **)&str1);
	return (output);
}

static char			*get_prefix(char *str, t_flag *flag)
{
	if (str)
	{

	}
	if (flag->conv == 'o')
	{
		// if (str[0] != '0')
		return ("0");
	}
	if (flag->conv == 'x')
	{
		// if (str[0] == '0' && str[1] == '0')
		//     str[1] = 'x';
		// else if (str[0] != '0' && str[1] != '0')
		//     str = ft_str_join("0x", str, flag);
		// else if (str[0] == '0' && str[1] != '0')
		//     str = ft_str_join("0x", str + 1, flag);
		// else
		return ("0x");
	}
	if (flag->conv == 'X')
	{
		// if (str[0] == '0' && str[1] == '0')
		//     str[1] = 'X';
		// else if (str[0] != '0' && str[1] != '0')
		//     str = ft_str_join("0X", str, flag);
		// else if (str[0] == '0' && str[1] != '0')
		//     str = ft_str_join("0X", str + 1, flag);
		// else
		return ("0X");
	}
	return ("");
}

static char			*ft_add_prefix(char *str, t_flag *flag, int sign)
{
	(void)(sign);
	str = ft_str_join(get_prefix(str, flag), str, flag);
	return (str);
}

static char			*ft_add_sign(char *str, t_flag *flag, int sign)
{
	if (GOT_PLUS(flag, sign))
		str = ft_str_join("+", str, flag);
	if (GOT_MINUS(flag, sign))
		str = ft_str_join("-", str, flag);
	if (GOT_SPACE(flag, sign))
		str = ft_str_join(" ", str, flag);
	return (str);
}

static size_t		get_size_to_add(char *str, t_flag *flag, int sign)
{
	unsigned int	str_len;

	str_len = 0;
	if (NUMERICAL_VALUE(flag) == 0)
		return (str_len);
	if (GOT_PLUS(flag, sign))
		str_len++;
	if (GOT_MINUS(flag, sign))
		str_len++;
	if (GOT_SPACE(flag, sign))
		str_len++;
	if (GOT_PREFIX(flag, sign))
		str_len += ft_strlen(get_prefix(str, flag));
	return (str_len);
}

static char			*str_to_fill(char *str, t_flag *flag, int sign)
{
	char			*to_add;
	unsigned int	to_add_len;
	unsigned int	i;

	to_add_len = get_size_to_add(str, flag, sign);
	if (to_add_len + ft_strlen(str) >= flag->width)
		return (ft_strdup(""));
	if (!(to_add = (char *)malloc(sizeof(*to_add) * (flag->width + 2))))
		return (NULL);
	i = 0;
	while (to_add_len + ft_strlen(str) + i < flag->width)
	{
		if (flag->key & KEY_F)
			to_add[i] = FILL_WITH_ZEROS_FLOAT(flag, sign) ? '0' : ' ';
		else	
			to_add[i] = FILL_WITH_ZEROS(flag, sign) ? '0' : ' ';
		i++;
	}
	to_add[i] = '\0';
	return (to_add);
}

char				*ft_apply_padding(char *str, t_flag *flag, int sign)
{
	char			*to_add;

	if (str[0] && str[0] == '0' && flag->conv == 'o')
		flag->hash = 0;
	to_add = str_to_fill(str, flag, sign);
	if (NUMERICAL_VALUE(flag) == 0)
	{
		if (flag->minus == 1)
			str = ft_str_join_r(str, to_add, flag);
		else
			str = ft_str_join(to_add, str, flag);
		ft_memdel((void **)&to_add);
		return (str);
	}
	if (FILL_WITH_ZEROS(flag, sign) || (flag->key & KEY_F && FILL_WITH_ZEROS_FLOAT(flag, sign)))
	{
		str = ft_str_join(to_add, str, flag);
		if (GOT_PREFIX(flag, sign))
			str = ft_add_prefix(str, flag, sign);
		str = ft_add_sign(str, flag, sign);

		// // try to delete 0 to get ft_strlen( == width)
		// while (ft_strlen(str) > flag->width)
		// {
		//     if (ft_str_find_extra_zero(str) == -1)
		//         break ;
		// }
	}
	else
	{
		str = ft_add_sign(str, flag, sign);
		if (GOT_PREFIX(flag, sign))
			str = ft_add_prefix(str, flag, sign);
		if (flag->minus == 1)
			str = ft_str_join_r(str, to_add, flag);
		else
			str = ft_str_join(to_add, str, flag);

		// // try to delete space to get ft_strlen( == width)
		// while (ft_strlen(str) > flag->width)
		// {
		//     if (delete_useless_space(&str, flag) == 0)
		//         break ;
		// }
	}
	ft_memdel((void **)&to_add);
	return (str);
}
