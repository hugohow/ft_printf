/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_nb_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:59:51 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 15:16:25 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_nb_l(va_list *ap, t_flag *flag)
{
	unsigned long tmp;
	char *output;
	int sign;

	tmp = va_arg(*ap, unsigned long);
	sign = tmp != 0;
	output = ft_ulltoa((unsigned long long)(tmp));
	output = ft_convert_output(output, flag);
	output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	return (output);
}