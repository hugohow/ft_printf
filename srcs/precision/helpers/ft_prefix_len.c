/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefix_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:37:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/25 16:27:01 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_prefix_len(t_flag *flag, int sign)
{
	if (GOT_PREFIX(flag, sign))
	{
		if (flag->conv == 'o')
			return (ft_strlen(PREFIX_0));
		if (flag->conv == 'x')
			return (ft_strlen(PREFIX_0X));
		if (flag->conv == 'X')
			return (ft_strlen(PREFIX_0X_MAJ));
	}
	return (0);
}