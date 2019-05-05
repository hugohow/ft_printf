/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:24:51 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/04 20:13:56 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_s(va_list *ap, t_flag *flag, int fd)
{
	char	*output;
	char	*arg;
	size_t	size_allocation;
	size_t	res;

	arg = va_arg(*ap, char*);
	size_allocation = arg == NULL ? ft_strlen("(null)") : ft_strlen(arg);
	size_allocation = ft_get_size_to_allocate(size_allocation, flag);
	if (!(output = (char *)malloc(sizeof(*output) * size_allocation)))
		return (-1);
	output = ft_strcpy(output, arg == NULL ? "(null)" : arg);
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}