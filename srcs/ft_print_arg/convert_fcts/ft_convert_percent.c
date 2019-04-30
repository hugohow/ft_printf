/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:05:59 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/30 17:12:32 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_percent(va_list *ap, t_flag *flag)
{
	char *output;

	if (ap && flag)
	{

	}
	output = ft_strdup(PERCENTAGE);
	// output = ft_apply_padding(output, flag, 1);
	return (output);
}