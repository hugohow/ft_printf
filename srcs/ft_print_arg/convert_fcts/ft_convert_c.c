/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:36:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/02 12:41:36 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

char *ft_convert_c(va_list *ap, t_flag *flag)
{
	char *output;
	size_t size_allocation;

	size_allocation = ft_get_size_to_allocate(2, flag);
	output = malloc(size_allocation * sizeof(char));
	output[0] = (char)va_arg(*ap, int);
	output[1] = '\0';
	if (output[0] == '\0' || output[0] == 0)
		output = ft_strcpy(output, "\0");
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	return (output);
}