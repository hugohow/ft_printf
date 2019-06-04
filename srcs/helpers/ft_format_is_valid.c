/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 20:41:29 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/04 21:12:44 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format_is_valid(const char *format)
{
	int					i;
	char				*flag;
	
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!(flag = (char *)ft_memalloc((ft_strlen(format + i) + 1) * sizeof(char))))
				return (-1);
			flag = ft_strncpy(flag, format + i, (int)ft_flaglen(format + i) + 1);
			if (ft_flag_get_key(flag) == 0)
			{
				ft_putstr_fd("Format is invalid \n", 2);
				ft_memdel((void **)&flag);
				return (0);
			}
			ft_memdel((void **)&flag);
			i += (int)ft_flaglen(format + i) + 1;
		}
		else
			i++;
	}
	return (1);
}