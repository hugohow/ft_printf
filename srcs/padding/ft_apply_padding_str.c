/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_padding_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 21:55:03 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/30 22:21:07 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static char			*ft_str_join(const char *to_add, char *str1, t_flag *flag)
{
	char			*output;
	size_t			size_allocation;
	int				k;
	int				i;

	size_allocation = ft_get_size_to_allocate(\
		ft_strlen(str1) + ft_strlen(to_add), flag);
	if (!(output = (char *)malloc(sizeof(*output) * (size_allocation + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (to_add[i])
		output[k++] = to_add[i++];
	i = 0;
	while (str1[i])
		output[k++] = str1[i++];
	output[k] = 0;
	ft_memdel((void **)&str1);
	return (output);
}

static char			*ft_str_join_r(char *str1, const char *to_add, t_flag *flag)
{
	char			*output;
	size_t			size_allocation;
	int				k;
	int				i;

	size_allocation = ft_get_size_to_allocate(\
		ft_strlen(str1) + ft_strlen(to_add), flag);
	if (!(output = (char *)malloc(sizeof(*output) * (size_allocation + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (str1[i])
		output[k++] = str1[i++];
	i = 0;
	while (to_add[i])
		output[k++] = to_add[i++];
	output[k] = 0;
	ft_memdel((void **)&str1);
	return (output);
}

static char			*str_to_fill(char *str, t_flag *flag, int sign)
{
	char			*to_add;
	unsigned int	to_add_len;
	unsigned int	i;

	to_add_len = 0;
	if (sign)
	{
		
	}
	if (to_add_len + ft_strlen(str) >= flag->width)
		return (ft_strdup(""));
	if (!(to_add = (char *)malloc(sizeof(*to_add) * (flag->width + 2))))
		return (NULL);
	i = 0;
	while (to_add_len + ft_strlen(str) + i < flag->width)
	{
		if (flag->key & KEY_F)
			to_add[i] = FILL_WITH_ZEROS_FLOAT(flag, sign) ? '0' : ' ';
		else	
			to_add[i] = FILL_WITH_ZEROS(flag, sign) ? '0' : ' ';
		i++;
	}
	to_add[i] = '\0';
	return (to_add);
}

char				*ft_apply_padding_str(char *str, t_flag *flag, int sign)
{
	char			*to_add;

	if (str[0] && str[0] == '0' && flag->conv == 'o')
		flag->hash = 0;
	to_add = str_to_fill(str, flag, sign);
	if (flag->minus == 1)
		str = ft_str_join_r(str, to_add, flag);
	else
		str = ft_str_join(to_add, str, flag);
	ft_memdel((void **)&to_add);
	return (str);
}
