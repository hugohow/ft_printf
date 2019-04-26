/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:10 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/27 00:41:59 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


typedef union {
    float f;
    unsigned char a[sizeof(float)];
} U;


void print_in_bin(unsigned char a, int i)
{
	char base[2] = "01";

	if (i == 8)
		return ;
	print_in_bin(a / 2, i + 1);
	printf("%c", base[a % 2]);
}

void print_bin_floating_point(float nb)
{
	U u = { (float)nb };
	for (int i = (int)sizeof(float) - 1; i >= 0; --i)
	{
		print_in_bin(u.a[i], 0);
		printf(" ");
	}
}

char *get_binary(unsigned char c)
{
	char *output;
	char base[2] = "01";
	int k;

	output = (char *)malloc(sizeof(char) * (8 + 1));
	k = 0;
	while (c != 0)
	{
		output[k] = base[c % 2];
		c /= 2;
		k++;
	}
	while (k != 8)
	{
		output[k] = base[0];
		k++;
	}
	output[k] = '\0';
	
	k = 0;
	char tmp;
	while (k != 4)
	{
		tmp = output[k];
		output[k] = output[7 - k];
		output[7 - k] = tmp;
		k++;
	}

	return (output);
}

char *get_bin_floating_point(float nb)
{
	char *output;
	int i;

	output = malloc(33 * sizeof(char));
	output[0] = '\0';
	i = (int)sizeof(float) - 1;
	U u = { (float)nb };
	while (i >= 0)
	{
		output = ft_strcat(output, get_binary(u.a[i]));
		i--;
	}
	return (output);
}

char *ft_convert_f(va_list *ap, t_flag *flag)
{
	double tmp;
	char *output;

	tmp = va_arg(*ap, double);
	output = NULL;
	print_bin_floating_point((float)tmp);
	printf("\n\n");
	printf("%s ", get_bin_floating_point((float)tmp));

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