/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:10 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/26 18:30:10 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


typedef union {
    float f;
    uint8_t a[sizeof(float)];
} U;


void print_in_bin(uint8_t a, int i)
{
	char base[2] = "01";

	if (i == 8)
		return ;
	print_in_bin(a / 2, i + 1);
	printf("%c", base[a % 2]);
}

char *ft_convert_f(va_list *ap, t_flag *flag)
{
	double tmp;
	char *output;
	// size_t size_allocation;
	// int sign;

	tmp = va_arg(*ap, double);
	output = NULL;
	U u = { (float)tmp };

	// print_in_bin(5, 0);
	for (int i = (int)sizeof(float) - 1; i >= 0; --i)
	{
		print_in_bin(u.a[i], 0);
		printf(" ");
	}



	if (flag)
	{

	}
	// sign = tmp;
	// size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	// output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), ft_get_size_to_allocate(size_allocation, flag));
	// output = ft_apply_padding(output, flag, sign);
	// output = ft_apply_precision(output, flag, sign);
	return (output);
}