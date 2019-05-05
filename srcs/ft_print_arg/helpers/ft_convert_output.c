/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_output.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:12:43 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/05 16:04:35 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t get_len(long long nb, size_t base_len)
{
	size_t size;
	long long nb_tmp;

	size = 0;
	nb_tmp = nb;
	while (nb_tmp != 0)
	{
		nb_tmp /= base_len;
		size++;
	}
	return (size);
}

static char *ft_convert_base_offset(char *decimal, char *base, t_flag *flag)
{
	char		*output;
	long long	result;
	size_t		i;
	size_t		base_len;
	size_t		len;
    int         mem;

	i = -1;
	result = 0;
	base_len = ft_strlen(base);
	while (decimal[++i])
		result = result * 10 + (decimal[i] - '0');
	len = get_len(result, base_len);
    mem = ft_get_size_to_allocate(len, flag);
	output = (char *)ft_memalloc((mem +  + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	output[len--] = '\0';
	if (result == 0)
		output[0] = base[0];
	while (result != 0)
	{
		output[len--] = base[result % base_len];
		result /= base_len;
	}
	return (output);
}

char *ft_convert_output(char *str, t_flag *flag)
{
    char *output;

    if (flag->conv == 'o')
    {
        output = ft_convert_base_offset(str, BASE_O, flag);
        ft_memdel((void **)&str);
        return (output);
    }
    if (flag->conv == 'x')
    {
        output = ft_convert_base_offset(str, BASE_X, flag);
        ft_memdel((void **)&str);
        return (output);
    }
    if (flag->conv == 'X')
    {
        output = ft_convert_base_offset(str, BASE_X_MAJ, flag);
        ft_memdel((void **)&str);
        return (output);
    }
    if (flag->conv == 'b')
    {
        output = ft_convert_base(str, BASE_B);
        ft_memdel((void **)&str);
        return (output);
    }
    return (str);
}