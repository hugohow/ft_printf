/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_get_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:03:54 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/01 20:08:01 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_get_key(char *flag)
{
	char c;
	// 0000 0000 0000 0000
	// 


	c = flag[ft_strlen(flag) - 1];
	if (c == '%')
		return (KEY_PERCENTAGE);
	else if (c == 'c' || c == 'C')
			return (KEY_C);
	else if (c == 'd' || c == 'i' || c == 'D')
			return (KEY_D);
	else if (c == 'o' || c == 'x' || c == 'X' || c == 'u' || c == 'O' || c == 'U' || c == 'b')
			return (KEY_NB);
	else if (c == 'p')
			return (KEY_P);
	else if (c == 's' || c == 'S')
			return (KEY_S);
	else if (c == 'f')
			return (KEY_F);
	else
		return (0);
}