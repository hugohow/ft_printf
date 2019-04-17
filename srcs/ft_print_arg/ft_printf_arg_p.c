/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:32:44 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 18:43:57 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_p(va_list *ap, char *str, size_t *len, t_flag *flag)
{
	char *output;

	if (str && flag)
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
		printf("%x", t[i]);
		// tmp_str = ft_itoa_u(t[i]);
		// tmp_str = ft_convert_base(tmp_str, "0123456789abcdef");
		// output = ft_strjoin(output, tmp_str);
		if (i == 0)
			break;
		i--;
	}
	// output = offset_p(output, str, 1);
	// if (flag->precision > 0)
	// if (flag->precision <= 0)
	//     output = ft_strjoin("0x", output);
	// ft_putstr(output);
	*len += ft_strlen(output);
}
