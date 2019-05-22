/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:36:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/22 20:28:28 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		print_null(t_flag *flag)
{
	char		c;
	int res;

	c = 0;
	res = 0;
	if (flag->width <= 0)
	{
		write(1, &c, 1);
		return (1);
	}
	if (!flag->minus)
	{
		while (--flag->width > 0 && ++(res))
			ft_putchar_fd(' ', 1);
		write(1, &c, 1);
		(res)++;
	}
	else if (flag->minus)
	{
		write(1, &c, 1);
		(res)++;
		while (--flag->width > 0 && ++(res))
			ft_putchar_fd(' ', 1);
	}
	return (res);
}


int			ft_print_c(va_list *ap, t_flag *flag, int fd)
{
	char	*output;
	size_t	res;
	size_t	size_allocation;

	size_allocation = ft_get_size_to_allocate(2, flag);
	output = ft_memalloc(size_allocation * sizeof(*output));
	output[0] = (char)va_arg(*ap, int);
	output[1] = '\0';
	if (output[0] == 0)
	{
		return ((int)print_null(flag));
	}
	// 	output = ft_strcpy(output, "\0");
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}
