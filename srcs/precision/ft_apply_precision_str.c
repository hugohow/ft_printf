/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 22:01:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/13 13:06:43 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char				*ft_apply_precision_str(char *str, t_flag *flag, int sign)
{
	if (sign == 0 && flag->precision == 0)
		return (ft_strcpy(str, ""));
	if (flag->precision < 0)
		return (str);
	str[flag->precision] = '\0';
	return (str);
}
