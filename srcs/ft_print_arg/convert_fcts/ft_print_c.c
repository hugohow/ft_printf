/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:36:56 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/05 17:46:18 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int			ft_print_c(va_list *ap, t_flag *flag, int fd)
{
	char	*output;
	size_t	res;
	size_t	size_allocation;
	int		width;
	int		ret;

	size_allocation = ft_get_size_to_allocate(2, flag);
	output = ft_memalloc(size_allocation * sizeof(char));
	output[0] = (char)va_arg(*ap, int);
	output[1] = '\0';
	if (output[0] == '\0' || output[0] == 0)
	{
		ft_memdel((void **)&output);
		width = flag->width;
		width--;
		ret = 0;
		while (width > 0)
		{
			ft_putchar_fd(' ', fd);
			width--;
			ret++;
		}
		// printf("ret %d\n", ret);
		return (ret + 1);
	}
	// 	output = ft_strcpy(output, "\0");
	output = ft_apply_precision_s(output, flag, 1);
	output = ft_apply_padding(output, flag, 1);
	ft_putstr_fd(output, fd);
	res = (ft_strlen(output));
	ft_memdel((void **)&output);
	return ((int)res);
}