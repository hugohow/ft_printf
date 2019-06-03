/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:36:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/03 11:18:08 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_print_c(va_list *ap, t_flag *flag)
{
	char	*output;
	size_t	size_allocation;

	size_allocation = ft_len_to_alloc(2, flag);
	output = ft_memalloc(size_allocation * sizeof(*output));
	output[0] = (char)va_arg(*ap, int);
	output[1] = '\0';
	if (output[0] == 0)
		flag->character = 0;
	output = ft_apply_precision_str(output, flag, 1);
	output = ft_apply_padding_str(output, flag, 1);
	return (output);
}
