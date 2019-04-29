/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefix_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:37:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/29 16:26:06 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_prefix_len(t_flag *flag, int sign)
{
	int len;

	len = 0;
	if (GOT_PREFIX(flag, sign))
	{
		if (flag->conv == 'o')
			return (len + ft_strlen(PREFIX_0));
		if (flag->conv == 'x')
			return (len + ft_strlen(PREFIX_0X));
		if (flag->conv == 'X')
			return (len + ft_strlen(PREFIX_0X_MAJ));
	}
	return (len);
}