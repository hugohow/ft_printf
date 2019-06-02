/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 22:57:04 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 16:37:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_get_binary(unsigned char c, char *tmp_str)
{
	char		base[2] = "01";
	char		tmp;
	int			k;

	k = 0;
	while (c != 0)
	{
		tmp_str[k++] = base[c % 2];
		c /= 2;
	}
	while (k != 8)
		tmp_str[k++] = base[0];
	tmp_str[k] = '\0';
	k = 0;
	while (k != 4)
	{
		tmp = tmp_str[k];
		tmp_str[k] = tmp_str[7 - k];
		tmp_str[7 - k] = tmp;
		k++;
	}
	return (tmp_str);
}
