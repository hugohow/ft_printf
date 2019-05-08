/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_zeros.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:12:41 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/08 17:40:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_delete_element(char *str, t_flag *flag, int i)
{
	if (str == NULL)
		return (NULL);
	if (i >= (int)ft_strlen(str))
		return (NULL);
	if (flag->minus == 1)
		ft_str_left_shift(str + i, (int)ft_strlen(str + i) - 1);
	else
		str = ft_str_right_shift(str, i);
	return (str);
}

static int		ft_str_find_extra_zero(char *str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) || ft_isalpha(str[i]))
		{
			if (str[i] == '0')
				return (i);
			return (-1);
		}
		i++;
	}
	return (-1);
}

static int		delete_one_zero(char **p_str, t_flag *flag, int sign)
{
	int			i;

	i = ft_str_find_extra_zero(*p_str);
	if (sign)
	{

	}
	if (i == -1)
		return (0);
	i += 0;
	if (ft_delete_element((*p_str), flag, i) == NULL)
		return (0);
	return (1);
}

char			*ft_delete_zeros(char *str, t_flag *flag, int sign)
{
	int			offset;

	offset = 0;
	if (ft_str_precision_count(str, offset) == flag->precision)
		return (str);
	if (delete_one_zero(&str, flag, sign) == 0)
		return (str);
	return (ft_delete_zeros(str, flag, sign));
}
