/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_variable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 19:38:21 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/08 17:39:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_count_variable(const char *format)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count++;
		i++;
	}
	return (count);
}
