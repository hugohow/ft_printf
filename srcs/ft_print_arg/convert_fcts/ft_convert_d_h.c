/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:19:21 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/26 12:21:54 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_d_h(va_list *ap, t_flag *flag)
{
	int tmp;
	char *output;
	size_t size_allocation;
	int sign;

	tmp = va_arg(*ap, int);
	sign = tmp;
	size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), ft_get_size_to_allocate(size_allocation, flag));
	output = ft_apply_padding(output, flag, sign);
	output = ft_apply_precision(output, flag, sign);
	return (output);
}