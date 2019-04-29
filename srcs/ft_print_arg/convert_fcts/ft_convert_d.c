/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:53:57 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 15:38:53 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_convert_d(va_list *ap, t_flag *flag)
{
	int tmp;
	char *output;
	size_t size_allocation;
	int sign;

	tmp = va_arg(*ap, int);
	sign = tmp;
	size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	size_allocation = ft_get_size_to_allocate(size_allocation, flag);
	output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), size_allocation);
	output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	return (output);
}