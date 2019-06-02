/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_f_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 22:54:43 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/02 14:58:02 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char	*g_half_powers[] =
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
	HALF_POWER_24,
	HALF_POWER_25,
	HALF_POWER_26,
	HALF_POWER_27,
	HALF_POWER_28,
	HALF_POWER_29,
	HALF_POWER_30,
	HALF_POWER_31,
	HALF_POWER_32,
	HALF_POWER_33,
	HALF_POWER_34,
	HALF_POWER_35,
	HALF_POWER_36,
	HALF_POWER_37,
	HALF_POWER_38,
	HALF_POWER_39,
	HALF_POWER_40,
	HALF_POWER_41,
	HALF_POWER_42,
	HALF_POWER_43,
	HALF_POWER_44,
	HALF_POWER_45,
	HALF_POWER_46,
	HALF_POWER_47,
	HALF_POWER_48,
	HALF_POWER_49,
	HALF_POWER_50,
	HALF_POWER_51,
	HALF_POWER_52,
	HALF_POWER_53,
	HALF_POWER_54,
	HALF_POWER_55,
	HALF_POWER_56,
	HALF_POWER_57,
	HALF_POWER_58,
	HALF_POWER_59,
	HALF_POWER_60,
	HALF_POWER_61,
	HALF_POWER_62,
	HALF_POWER_63,
	HALF_POWER_64,
	0,
};

static int					get_exponent(char *bin_floating_point)
{
	int				exponent;
	int				i;
	int				in;

	i = 1;
	exponent = 0;
	in = 16384;
	while (i < 16)
	{
		if (bin_floating_point[i] == '1')
			exponent += in * 1;
		in /= 2;
		i++;
	}

	return (exponent - 16383);
}

static char				*get_dec_mantissa(\
	char *str, char **p_output, size_t size_allocation)
{
	int				i;

	i = 0;
	*p_output = ft_strcpy(*p_output, "1");
	while (str[i])
	{
		if (i == 64)
			break;
		if (str[i] == '1')
			*p_output = ft_bigint_add(\
				*p_output, g_half_powers[i + 1], size_allocation);
		i++;
	}

	if (ft_strcmp(*p_output, "1") == 0)
		*p_output = ft_strcpy(*p_output, "0");

	return (*p_output);
}

static char *ft_infnity_or_nan(char *output, t_flag *flag)
{
	if (ft_strcmp(output, "0") == 0)
	{
		output = ft_strcpy(output, "inf");
		flag->zero = 0;
	}
	else
	{
		output = ft_strcpy(output, "nan");
		flag->zero = 0;
		flag->plus = 0;
		flag->plus = 0;
		flag->space = 0;
	}
	return (output);
}

static char *get_decimal_str(char *output, int size_allocation, int expo)
{
	while (expo != 0)
	{
		if (expo < 0)
		{
			output = ft_bigint_divide_by_two(output, size_allocation);
			expo++;
		}
		else
		{
			output = ft_bigint_multiply_by_two(output);
			expo--;
		}
	}
	return (output);
}


char 	*ft_itoa_f_l(long double nb, char *floating_str, t_flag *flag, int size_allocation)
{
	char			*output;
	int				expo;

	expo = get_exponent(floating_str);
	if (!(output = (char *)ft_memalloc(size_allocation * sizeof(char))))
		return (NULL);
	output = get_dec_mantissa(floating_str + 17, &output, size_allocation);
	if (nb == 0)
		output = ft_strcpy(output, "0.");
	else if (expo == 16384)
		output = ft_infnity_or_nan(output, flag);
	else if (expo == 0)
		output = ft_strcpy(output, "1.");
	else if (expo != -16382)
		output = get_decimal_str(output, size_allocation, expo);
	return (output);
}