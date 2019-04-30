/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:24:51 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/30 16:35:53 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_convert_s(va_list *ap, t_flag *flag)
{
	char *output;
	char *arg;
	size_t size_allocation;

	arg = va_arg(*ap, char*);
	size_allocation = arg == NULL ? ft_strlen("(null)") : ft_strlen(arg);
	size_allocation = ft_get_size_to_allocate(size_allocation, flag);

	output = (char *)malloc((size_allocation) * sizeof(char));
	if (output == NULL)
		return (NULL);
	
	output = ft_strcpy(output, arg == NULL ? "(null)" : arg);
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	return (output);
}