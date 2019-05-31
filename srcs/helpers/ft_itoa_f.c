/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 23:08:55 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/31 23:32:34 by hhow-cho         ###   ########.fr       */
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


static char				*get_mantissa(char *bin_floating_point)
{
	return (bin_floating_point + 12);
}

static int					get_exponent(char *bin_floating_point)
{
	int				exponent;
	int				i;
	int				in;

	i = 1;
	exponent = 0;
	in = 1024;
	while (i < 12)
	{
		if (bin_floating_point[i] == '1')
			exponent += in * 1;
		in /= 2;
		i++;
	}

	return (exponent - 1023);
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




char 	*ft_itoa_f(char *floating_str, t_flag *flag, int size_allocation)
{
	char			*output;
	int				expo;

	expo = get_exponent(floating_str);
	output = (char *)ft_memalloc(sizeof(*output) * size_allocation);
	output = get_dec_mantissa(get_mantissa(\
		floating_str), &output, size_allocation);

	if (expo == 1024)
	{
		if (ft_strcmp(output, "0") == 0)
		{
			output = ft_strdup("inf");
			flag->zero = 0;
			return (output);
		}
		else
		{
			output = ft_strdup("nan");
			flag->zero = 0;
			flag->plus = 0;
			flag->plus = 0;
			flag->space = 0;
			return (output);
		}
	}
	if (expo != -1022)
	{
		if (expo == 0)
		{
			output = ft_strdup("1.");
		}
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
	}
	return (output);
}