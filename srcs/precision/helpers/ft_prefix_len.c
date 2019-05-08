/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefix_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:37:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/08 17:39:44 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_prefix_len(t_flag *flag, int sign)
{
	int	len;

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
