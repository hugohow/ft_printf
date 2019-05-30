/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:10 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/30 13:48:06 by hhow-cho         ###   ########.fr       */
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
	0,
};

typedef union
{
	float			f;
	unsigned char	a[sizeof(float)];
}					t_union;

static char				*get_binary(unsigned char c)
{
	char			*output;
	char			base[2] = "01";
	char			tmp;
	int				k;

	if (!(output = (char *)malloc(sizeof(*output) * (8 + 1))))
		return (NULL);
	k = 0;
	while (c != 0)
	{
		output[k++] = base[c % 2];
		c /= 2;
	}
	while (k != 8)
		output[k++] = base[0];
	output[k] = '\0';
	k = 0;
	while (k != 4)
	{
		tmp = output[k];
		output[k] = output[7 - k];
		output[7 - k] = tmp;
		k++;
	}
	return (output);
}

static char				*get_bin_floating_point(double nb)
{
	char			*output;
	int				i;
	unsigned char	t[sizeof(double) + 1];

	// type double code sur 64 bits
	if (!(output = (char *)malloc(sizeof(*output) * 100)))
		return (NULL);
	ft_memcpy(t, &nb, sizeof(double));
	i = (sizeof(double)) - 1;

	while (i != -1)
	{
		// tmp_str = ft_itoa((int)t[i]);
		// tmp_str = ft_convert_base(tmp_str, "0123456789abcdef");
		// if (ft_strlen(tmp_str) == 1)
		// {
		// 	tmp_str[1] = tmp_str[0];
		// 	tmp_str[0] = '0';
		// 	tmp_str[2] = 0;
		// }
		output = ft_strcat(output, get_binary(t[i]));
		i--;
	}


	// output[0] = '\0';
	// i = (int)sizeof(float) - 1;
	// t_union	u = { (double)nb };
	// while (i >= 0)
	// {
	// 	output = ft_strcat(output, get_binary(u.a[i]));
	// 	i--;
	// }
	// printf("%lu\n", ft_strlen(output));
	return (output);
}

static char				*get_mantissa(char *bin_floating_point)
{
	// printf("bin_floating_point : %s\n", bin_floating_point);
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
		if (i == 53)
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

int					ft_print_f(va_list *ap, t_flag *flag, int fd)
{
	char			*output;
	double			tmp;
	size_t			res;
	size_t			size_allocation;
	int				expo;
	int				sign;

	size_allocation = 4096;
	tmp = va_arg(*ap, double);
	sign = get_bin_floating_point(tmp)[0] == '1' ? -1 : 1;
	expo = get_exponent(get_bin_floating_point(tmp));
	output = (char *)malloc(sizeof(*output) * size_allocation);
	if (tmp == 0)
	{
		output = ft_strdup("0.");
	}
	else
	{
	output = get_dec_mantissa(get_mantissa(\
		get_bin_floating_point(tmp)), &output, size_allocation);
	if (expo == 1024)
	{
		if (ft_strcmp(output, "0") == 0)
		{
			output = ft_strdup("inf");
			flag->zero = 0;
			output = ft_apply_padding(output, flag, sign);
			ft_putstr_fd(output, fd);
			res = (ft_strlen(output));
			ft_memdel((void **)&output);
			return ((int)res);
		}
		else
		{
			output = ft_strdup("nan");
			flag->zero = 0;
			flag->plus = 0;
			flag->plus = 0;
			flag->space = 0;
			output = ft_apply_padding(output, flag, sign);
			ft_putstr_fd(output, fd);
			res = (ft_strlen(output));
			ft_memdel((void **)&output);
			return ((int)res);
		}
	}
	// printf("\nexpo : %d\n", expo);
	// printf("fraction : %s\n", output);
	if (expo == -1022)
	{

	}
	else
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
	}
	}
	// printf("output : %s\n", output);
	if (flag->precision == -1)
		output = ft_bigint_round(output, 6, size_allocation);
	else
		output = ft_bigint_round(output, flag->precision, size_allocation);
	// printf("output rounded : %s\n", output);
	// sign = tmp;
	// size_allocation = ft_nblen_ull((unsigned long long)(tmp < 0 ? -tmp : tmp));
	// output = ft_ulltoa_offset((unsigned long long)(tmp < 0 ? -tmp : tmp), ft_get_size_to_allocate(size_allocation, flag));
	// output = ft_apply_precision(output, flag, sign);
	output = ft_apply_padding(output, flag, sign);
	if (flag->hash && flag->precision == 0)
		output = ft_strjoin(output, ".");
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}
