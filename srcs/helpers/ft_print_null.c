/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 13:17:12 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/04 01:23:22 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_null(t_flag *flag, int fd)
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
			ft_putchar_fd(flag->zero ? '0' : ' ', fd);
		write(1, &c, fd);
		(res)++;
	}
	else if (flag->minus)
	{
		write(1, &c, fd);
		(res)++;
		while (--flag->width > 0 && ++(res))
			ft_putchar_fd(flag->zero ? '0' : ' ', fd);
	}
	return (res);
}
