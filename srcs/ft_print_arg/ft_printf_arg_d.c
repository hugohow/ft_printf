/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:28:50 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 17:02:54 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nblen_ull(unsigned long long nb)
{
	size_t	nblen;

	nblen = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		nblen++;
	}
	return (nblen);
}

static char *ft_ulltoa_offset(unsigned long long nb, size_t size_allocation)
{
	char				*output;
	size_t				nb_len;

	nb_len = ft_nblen_ull(nb);
	output = (char *)malloc((size_allocation) * sizeof(char));
	if (output == NULL)
		return (NULL);
	output[0] = '0';
	output[nb_len] = '\0';
	while (nb != 0)
	{
		output[--nb_len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (output);
}

int max(int a, int b, int c)
{
	int result;

	result = a;
	if (b > result)
		result = b;
	if (c > result)
		result = c;
	return (result);
}

static int get_size_to_allocate(size_t original_nblen, t_flag *flag)
{

	return (max((int)(original_nblen + 5), (int)(flag->width + 5), (int)(flag->precision + 5)));
}


void	ft_printf_arg_d(va_list *ap, char *str, size_t *len, t_flag *flag)
{
    // no -> 0
    // hh -> 1
    // h -> 2
    // l -> 3
    // ll -> 4
    // j -> 5
    // z -> 6
	if (str)
	{

	}
	char *output;
	size_t size_allocation;

	size_allocation = 0;
	if (flag->length == 0)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 1)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 2)
	{
		int tmp;
		int sign;
		tmp = va_arg(*ap, int);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 3)
	{
		long tmp;
		int sign;
		tmp = va_arg(*ap, long);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 4)
	{
		long long tmp;
		int sign;
		tmp = va_arg(*ap, long long);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 5)
	{
		intmax_t tmp;
		int sign;
		tmp = va_arg(*ap, intmax_t);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), get_size_to_allocate(size_allocation, flag));
		sign = tmp < 0 ? -1 : 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
	else if (flag->length == 6)
	{
		size_t tmp;
		int sign;
		tmp = va_arg(*ap, size_t);
		size_allocation = ft_nblen_ull((unsigned long long)(tmp));
		output = ft_ulltoa_offset((unsigned long long)(tmp), get_size_to_allocate(size_allocation, flag));
		sign = 1;
		sign = tmp == 0 ? 0 : sign;
		output = ft_apply_padding_d(output, flag, sign);
		output = ft_apply_precision(output, flag, sign);
		ft_putstr(output);
		*len += ft_strlen(output);
		free(output);
		output = NULL;
	}
}
