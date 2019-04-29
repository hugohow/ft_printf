/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:24:51 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 19:09:55 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_s(va_list *ap, t_flag *flag)
{
	char *output;

	output = va_arg(*ap, char*);
	if (flag->precision > 0 && (unsigned int)flag->precision < ft_strlen(output))
		output = ft_strsub(output, 0, flag->precision);
	if (flag->precision == 0)
		output = "";
	if (output == NULL)
		output = "(null)";
	// output = ft_apply_padding(output, flag, 1);
	return (output);
}