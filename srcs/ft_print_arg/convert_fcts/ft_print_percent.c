/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:05:59 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/30 21:56:50 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_print_percent(va_list *ap, t_flag *flag)
{
	char	*output;
	// size_t	res;

	if (ap && flag)
	{
		
	}
	output = ft_strdup(PERCENTAGE);
	// output = ft_apply_padding_str(output, flag, 1);
	return (output);
}
