/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:10 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/03 18:35:22 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HALF_POWER_0 "1"
#define HALF_POWER_1 "0.5"
#define HALF_POWER_2 "0.25"
#define HALF_POWER_3 "0.125"
#define HALF_POWER_4 "0.0625"
#define HALF_POWER_5 "0.03125"
#define HALF_POWER_6 "0.015625"
#define HALF_POWER_7 "0.0078125"
#define HALF_POWER_8 "0.00390625"
#define HALF_POWER_9 "0.001953125"
#define HALF_POWER_10 "0.0009765625"
#define HALF_POWER_11 "0.00048828125"
#define HALF_POWER_12 "0.000244140625"
#define HALF_POWER_13 "0.0001220703125"
#define HALF_POWER_14 "0.00006103515625"
#define HALF_POWER_15 "0.00003051757812"
#define HALF_POWER_16 "0.00001525878906"
#define HALF_POWER_17 "0.000007629394531"
#define HALF_POWER_18 "0.000003814697266"
#define HALF_POWER_19 "0.000001907348633"
#define HALF_POWER_20 "0.000000953674316"
#define HALF_POWER_21 "0.000000476837158"
#define HALF_POWER_22 "0.000000238418579"
#define HALF_POWER_23 "0.00000011920929"

static const	char *half_powers[] =
{
	HALF_POWER_0,
	HALF_POWER_1,
	HALF_POWER_2,
	HALF_POWER_3,
	HALF_POWER_4,
	HALF_POWER_5,
	HALF_POWER_6,
	HALF_POWER_7,
	HALF_POWER_8,
	HALF_POWER_9,
	HALF_POWER_10,
	HALF_POWER_11,
	HALF_POWER_12,
	HALF_POWER_13,
	HALF_POWER_14,
	HALF_POWER_15,
	HALF_POWER_16,
	HALF_POWER_17,
	HALF_POWER_18,
	HALF_POWER_19,
	HALF_POWER_20,
	HALF_POWER_21,
	HALF_POWER_22,
	HALF_POWER_23,
	0,
};


typedef union {
    float f;
    unsigned char a[sizeof(float)];
} U;


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

char *get_mantissa(char *bin_floating_point)
{
	return (bin_floating_point + 9);
}

int get_exponent(char *bin_floating_point)
{
	int exponent;
	int i;
	int in;

	i = 1;
	exponent = 0;
	in = 128;
	while (i < 9)
	{
		if (bin_floating_point[i] == '1')
			exponent += in * 1;
		in /= 2;
		i++;
	}

	return (exponent - 127);
}

char *get_dec_mantissa(char *str)
{
	int 	i;
	char 	*result;

	i = 0;
	result = malloc(99999999999* sizeof(char));
	result = ft_strcpy(result, "1");
	while (str[i])
	{
		if (i == 22)
			break;
		if (str[i] == '1')
		{
			result = ft_bigint_add(result, half_powers[i + 1]);
		}
		i++;
	}
	return (result);
}



char *ft_convert_f(va_list *ap, t_flag *flag)
{
	double tmp;
	char *output;
	int expo;
	int sign;

	
	tmp = va_arg(*ap, double);
	sign = get_bin_floating_point((float)tmp)[0] == '1' ? -1 : 1;
	expo = get_exponent(get_bin_floating_point((float)tmp));
	output = get_dec_mantissa(get_mantissa(get_bin_floating_point((float)tmp)));
	while (expo != 0)
	{
		if (expo < 0)
		{
			output = ft_bigint_divide_by_two(output);	
			expo++;
		}
		else
		{
			output = ft_bigint_multiply_by_two(output);
			expo--;
		}
	}

	if (flag)
	{

	}
	// sign = tmp;
	// size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	// output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), ft_get_size_to_allocate(size_allocation, flag));
	output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	return (output);
}