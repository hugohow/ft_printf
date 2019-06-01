/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:34:10 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/01 22:38:56 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char				*get_bin_floating_point(double nb)
{
	char			*output;
	int				i;
	unsigned char	t[sizeof(double) + 1];
	char tmp[10];
	// type double code sur 64 bits
	if (!(output = (char *)ft_memalloc(sizeof(char) * 100)))
		return (NULL);
	ft_memcpy(t, &nb, sizeof(double));
	i = (sizeof(double)) - 1;

	while (i != -1)
	{
		
		output = ft_strcat(output, ft_get_binary(t[i], tmp));
		i--;
	}
	return (output);
}
char				*ft_print_f(va_list *ap, t_flag *flag)
{
	char			*output;
	double			tmp;
	size_t			size_allocation;
	int				sign;
	char 			*to_free;
	size_allocation = 4096;
	tmp = (double)va_arg(*ap, double);
	to_free = get_bin_floating_point(tmp);
	sign = to_free[0] == '1' ? -1 : 1;
	if (tmp == 0)
	{
		output = (char *)ft_memalloc(sizeof(char) * size_allocation);
		output = ft_strcpy(output, "0.");
	}
	else
		output = ft_itoa_f(to_free, flag, size_allocation);
	// si autre que infini ou nan
	if  (ft_strchr(output, 'i') == 0 && ft_strchr(output, 'n') == 0 )
	{
		if (flag->precision == -1)
			output = ft_bigint_round(output, 6, size_allocation);
		else
			output = ft_bigint_round(output, flag->precision, size_allocation);
		if (output[0] == '.')
		{
			char *to_free_tmp;
			to_free_tmp = output;
			output = ft_strjoin("0", to_free_tmp);
			ft_memdel((void **)&to_free_tmp);
		}
		if (ft_strlen(output) == 0)
		{
			output = (char *)ft_memalloc(sizeof(char) * size_allocation);
			output = ft_strcpy(output, "0");
		}
		if (flag->hash && flag->precision == 0)
		{
			char *to_free_tmp;
			to_free_tmp = output;
			output = ft_strjoin(to_free_tmp, ".");
			ft_memdel((void **)&to_free_tmp);
		}
	}
	output = ft_apply_padding_nb(output, flag, sign);

	ft_memdel((void **)&to_free);
	return (output);
}
