/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 20:41:29 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/05 19:43:17 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format_is_valid(const char *fo)
{
	int					i;
	char				*flag;

	i = -1;
	while (fo[++i])
	{
		if (fo[i] == '%')
		{
			if (!(flag = (char *)ft_memalloc((ft_strlen(fo) \
				+ 1) * sizeof(char))))
				return (-1);
			flag = ft_strncpy(flag, fo + i, (int)ft_flaglen(fo + i) + 1);
			if (ft_flag_get_key(flag) == 0)
			{
				ft_putstr_fd("fo is invalid \n", 2);
				ft_memdel((void **)&flag);
				return (0);
			}
			ft_memdel((void **)&flag);
			i += (int)ft_flaglen(fo + i);
		}
	}
	return (1);
}
