/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:38:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/25 20:40:54 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_convert_p(va_list *ap, t_flag *flag)
{
	char *output;

	if (ap && flag)
	{

	}
	va_arg(*ap, void *);
	unsigned char t[(sizeof ap) + 1];
	// char *tmp_str;
	size_t i;
	ft_memcpy(t, &ap, (sizeof ap) + 1);
	i = (sizeof ap) - 1;
	output = malloc(16 * sizeof(char));
	while (1)
	{
		// printf("%x", t[i]);
		// tmp_str = ft_itoa_u(t[i]);
		// tmp_str = ft_convert_base(tmp_str, "0123456789abcdef");
		// output = ft_strjoin(output, tmp_str);
		if (i == 0)
			break;
		i--;
	}
	return (output);
}