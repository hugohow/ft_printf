/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:36:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/04 20:11:26 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_print_c(va_list *ap, t_flag *flag, int fd)
{
	char *output;
	size_t res;
	size_t size_allocation;

	size_allocation = ft_get_size_to_allocate(2, flag);
	output = ft_memalloc(size_allocation * sizeof(char));
	output[0] = (char)va_arg(*ap, int);
	output[1] = '\0';
	if (output[0] == '\0' || output[0] == 0)
		output = ft_strcpy(output, "\0");
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}