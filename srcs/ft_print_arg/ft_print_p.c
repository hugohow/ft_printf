/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:38:37 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/31 18:35:41 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_itoa_p(void *addr, t_flag *flag)
{
	int				i;
	char			*output;
	char			*tmp_str;
	unsigned char	t[sizeof(uintptr_t) + 2];

	i = (sizeof(uintptr_t));
	ft_memcpy(t, &addr, sizeof(uintptr_t));
	if (!(output = (char *)ft_memalloc(sizeof(char) * (sizeof(uintptr_t) * 4))))
		return (NULL);
	tmp_str = NULL;
	while (i != -1)
	{
		tmp_str = ft_itoa((int)t[i]);
		tmp_str = ft_convert_output(tmp_str, flag);
		if (ft_strlen(tmp_str) == 1)
		{
			tmp_str[1] = tmp_str[0];
			tmp_str[0] = '0';
			tmp_str[2] = 0;
		}
		output = ft_strcat(output, tmp_str);
		ft_memdel((void **)&tmp_str);
		i--;
	}
	return (output);
}

char		*ft_print_p(va_list *ap, t_flag *flag)
{
	char			*output;
	void			*addr;
	int				i;
	int				len;

	addr = va_arg(*ap, void *);
	output = ft_itoa_p(addr, flag);
	i = 0;
	while (output[i] && output[i] == '0')
		i++;
	len = ft_strlen(output) - i;
	output = ft_memmove(output, output + i, len);
	output[len] = 0;
	if (len == 0)
		output = ft_strcpy(output, "0");
	output = ft_apply_precision_nb(output, flag, 1);
	output = ft_apply_padding_p(output, flag, 1);
	return (output);
}
