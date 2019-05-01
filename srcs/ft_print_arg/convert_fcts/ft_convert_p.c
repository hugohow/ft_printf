/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:38:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/01 14:16:35 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_convert_p(va_list *ap, t_flag *flag)
{
	char *output;
	void *addr;
	unsigned char t[sizeof(void *) + 1];
	char *tmp_str;
	int i;

	addr = va_arg(*ap, void *);
	ft_memcpy(t, &addr, sizeof(void *));
	i = (sizeof(void *));
	output = ft_memalloc((sizeof(void *) * 2 + 1) * sizeof(char));
	while (i != -1)
	{
		tmp_str = ft_itoa((int)t[i]);
		tmp_str = ft_convert_base(tmp_str, "0123456789abcdef");
		if (ft_strlen(tmp_str) == 1)
		{
			tmp_str[1] = tmp_str[0];
			tmp_str[0] = '0';
			tmp_str[2] = 0;
		}
		output = ft_strcat(output, tmp_str);
		i--;
	}
	i = 0;
	while (output[i])
	{
		if (output[i] != '0')
			break;
		i++;
	}
	int len;

	len =  ft_strlen(output) - i;
	output = ft_memmove(output, output + i, len);
	output[len] = 0;

	if (len == 0)
		output = ft_strcpy(output, "0");


	output = ft_apply_precision(output, flag, 1);
	output = ft_apply_padding_p(output, flag, 1);
	return (output);
}