/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_%.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:57:31 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/25 17:14:47 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_percentage(va_list *ap, char *str, size_t *len, t_flag *flag)
{

	if (str && ap)
	{

	}
	char *output;
	output = PERCENTAGE;
	output = ft_apply_padding(output, flag, 1);
	ft_putstr(output);
	*len += ft_strlen(output);
}
