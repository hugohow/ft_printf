/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 13:17:12 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 16:37:30 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_null(t_flag *flag, int fd)
{
	char	c;
	int		res;

	c = 0;
	res = 0;
	if (flag->width <= 0)
	{
		write(1, &c, fd);
		return (1);
	}
	if (!flag->minus)
	{
		while (--flag->width > 0 && ++(res))
			ft_putchar_fd(' ', fd);
		write(1, &c, fd);
		(res)++;
	}
	else if (flag->minus)
	{
		write(1, &c, fd);
		(res)++;
		while (--flag->width > 0 && ++(res))
			ft_putchar_fd(' ', fd);
	}
	return (res);
}
