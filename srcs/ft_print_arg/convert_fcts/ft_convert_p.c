/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:38:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/30 17:50:14 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_convert_p(va_list *ap, t_flag *flag)
{
	char *output;
	void *addr;
	unsigned char t[sizeof(void *) + 1];
	if (ap && flag)
	{

	}
	addr = va_arg(*ap, void *);
	// char *tmp_str;
	size_t i;
	ft_memcpy(t, &addr, sizeof(void *) + 1);
	i = (sizeof(void *)) + 1;
	output = malloc(16 * sizeof(char));
	output[0] = 0;
	while (i + 1 != 0)
	{
		printf("%x", t[i]);
		// tmp_str = ft_itoa((int)t[i]);
		// tmp_str = ft_convert_base(tmp_str, "0123456789abcdef");
		// output = ft_strjoin(output, tmp_str);
		i--;
	}
	// output[0] = '0';
	// output[1] = 'x';
	output = ft_apply_precision(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	return (output);
}