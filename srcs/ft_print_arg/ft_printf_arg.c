/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:38 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/26 16:15:00 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char    *ft_flag_replace(char *str, char *to_replace)
{
    str[ft_strlen(str) - 1] = '\0';
    return (ft_strcat(str, to_replace));
}

static const t_ft_convert fts_convert[] = 
{
    {KEY_PERCENTAGE, 0, &ft_convert_percent},
	{KEY_C, 0, &ft_convert_c},
	{KEY_S, 0, &ft_convert_s},
	{KEY_P, 0, &ft_convert_p},
	{KEY_D, 0, &ft_convert_d},
	{KEY_D, LENGTH_H, &ft_convert_d_h},
	{KEY_D, LENGTH_HH, &ft_convert_d_hh},
	{KEY_D, LENGTH_L, &ft_convert_d_l},
	{KEY_D, LENGTH_LL, &ft_convert_d_ll},
	{KEY_NB, 0, &ft_convert_nb},
	{KEY_NB, LENGTH_H, &ft_convert_nb_h},
	{KEY_NB, LENGTH_HH, &ft_convert_nb_hh},
	{KEY_NB, LENGTH_L, &ft_convert_nb_l},
	{KEY_NB, LENGTH_LL, &ft_convert_nb_ll},
	{KEY_F, 0, &ft_convert_f},
	{KEY_F, LENGTH_L, &ft_convert_f},
	{KEY_F, LENGTH_L_MAJ, &ft_convert_f_l_maj},
	{0, 0, NULL},
};

t_ft *ft_find_convert(t_flag *flag)
{
	int i;
	int j;

	i = 0;
	while (fts_convert[i].key)
	{
		if (fts_convert[i].key == flag->key)
		{
			j = i;
			while (fts_convert[j].key)
			{
				if (fts_convert[j].length == flag->length)
					return (fts_convert[j].fct);
				j++;
			}
			return (fts_convert[j].fct);
		}
		i++;
	}
	return (NULL);
}

void    ft_printf_arg(va_list *ap, char *str, size_t *len)
{
	t_flag *flag;
    t_ft *fct;
	char *output;

	flag = ft_create_flag(str);
	output = NULL;
	fct = ft_find_convert(flag);
	if (fct != NULL)
	{
		output = fct(ap, flag);
		if (output)
		{
			ft_putstr(output);
			*len += ft_strlen(output);
		}
	}
    ft_memdel((void **)&flag);
}
