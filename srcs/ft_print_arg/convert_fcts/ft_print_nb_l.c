/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:59:51 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/04 20:13:06 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nb_l(va_list *ap, t_flag *flag, int fd)
{
	unsigned long tmp;
	char *output;
	unsigned long long tmp_val;
	size_t size_allocation;
	size_t res;
	int sign;

	tmp = (unsigned long)va_arg(*ap, unsigned long int);
	if (tmp == 0)
		sign = 0;
	else
		sign = 1;
	tmp_val = (unsigned long long)tmp;
	size_allocation = ft_nblen_ull(tmp_val);
	size_allocation = ft_get_size_to_allocate(size_allocation, flag);
	output = ft_ulltoa_offset(tmp_val, size_allocation);
	output = ft_convert_output(output, flag);
	output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}