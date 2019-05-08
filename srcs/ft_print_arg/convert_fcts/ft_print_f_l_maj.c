/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f_l_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:26 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/04 20:12:30 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_print_f_l_maj(va_list *ap, t_flag *flag, int fd)
{
	long double	tmp;
	char		*output;
	size_t		size_allocation;
	size_t		res;
	int			sign;

	tmp = va_arg(*ap, long double);
	sign = tmp;
	size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), \
		ft_get_size_to_allocate(size_allocation, flag));
	output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}
