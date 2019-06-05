/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_e.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:10:31 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/05 19:19:08 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*get_output(char *output, int expo)
{
	int j;

	j = expo;
	if (j > 0)
	{
		while (j != 0)
		{
			output[i] = output[i - 1];
			output[i - 1] = '.';
			i--;
			j--;
		}
	}
	else
	{
		while (j != 0)
		{
			output[i] = output[i + 1];
			output[i + 1] = '.';
			i++;
			j++;
		}
	}
	return (output);
}

int			ft_apply_e(char *output)
{
	int i;
	int j;
	int expo;

	i = 0;
	while (output[i] && output[i] != '.')
		i++;
	expo = i;
	j = 0;
	while (output[j] && !(output[j] >= '1' && output[j] <= '9'))
		j++;
	expo = expo - j;
	if (expo > 0)
		expo--;
	if (expo == 0)
		return (0);
	output = get_output(output, expo);
	output = ft_bigint_trim(output);
	return (expo);
}
