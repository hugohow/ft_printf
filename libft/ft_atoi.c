/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:32:39 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/15 10:35:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_escapable_ft_atoi(char c)
{
	return (c == '\t' || c == '\v' || c == '\f' || c == '\r'
		|| c == '\n' || c == ' ');
}

int			ft_atoi(const char *str)
{
	long long	result;
	int			i;
	int			sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && is_escapable_ft_atoi(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = str[i] == '-' ? -1 : 1;
		i++;
	}
	while (str[i] && is_digit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
