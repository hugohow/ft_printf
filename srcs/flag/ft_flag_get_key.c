/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_get_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:03:54 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 20:30:17 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_flag_get_key(char *flag)
{
	char c;

	c = flag[ft_strlen(flag) - 1];
	if (c == '%')
		return ("%");
    else if (c == 'c' || c == 'C')
		return ("c");
    else if (c == 'd' || c == 'i' || c == 'D')
		return ("d");
    else if (c == 'o' || c == 'x' || c == 'X' || c == 'u' || c == 'O' || c == 'U')
		return ("oxXu");
    else if (c == 'p')
		return ("p");
    else if (c == 's' || c == 'S')
        return ("s");
    else
		return (0);
}