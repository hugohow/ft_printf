/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigint_divide_by_two.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:01:01 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/03 17:37:20 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *shift_right(char *str, size_t nb, size_t limit)
{
	size_t len;

	len = ft_strlen(str);
	if (len == 0 || nb <= 0)
		return (str);
	len = len + nb;
	if (len + 1 > limit)
		return (NULL);
	str[len + 1] = 0;
	while (len >= nb)
	{
		str[len] = str[len - nb];
		len--;
	}
	while (nb != 0)
	{
		str[nb - 1] = '0';
		nb--;
	}
	return (str);
}

char *ft_bigint_divide_by_two(char *output)
{
	size_t i;
	size_t j;
	int finished;
	int even;

	output = shift_right(output, 1, 99999);
	output[0] = '0';
	i = 0;
	finished = 0;
	while (output[i] && finished != 1)
	{
		even = (output[i] - '0') % 2;
		while (output[i] && ft_isdigit(output[i]) == 0)
		{
			output[i - 1] = output[i];
			i++;
		}
		j = i + 1;
		while (output[j] && ft_isdigit(output[j]) == 0)
		{
			output[j - 1] = output[j];
			j++;
			i++;
		}
		if (output[j] == 0)
		{
			output[j] = '0';
			output[j + 1] = 0;
			finished = 1;
		}
		if (even == 0)
		{
			if (output[j] == '0' || output[j] == '1')
				output[i] = '0';
			if (output[j] == '2' || output[j] == '3')
				output[i] = '1';
			if (output[j] == '4' || output[j] == '5')
				output[i] = '2';
			if (output[j] == '6' || output[j] == '7')
				output[i] = '3';
			if (output[j] == '8' || output[j] == '9')
				output[i] = '4';
		}
		else
		{
			if (output[j] == '0' || output[j] == '1')
				output[i] = '5';
			if (output[j] == '2' || output[j] == '3')
				output[i] = '6';
			if (output[j] == '4' || output[j] == '5')
				output[i] = '7';
			if (output[j] == '6' || output[j] == '7')
				output[i] = '8';
			if (output[j] == '8' || output[j] == '9')
				output[i] = '9';
		}
		i = j;
	}
	return (ft_bigint_trim(output));
}