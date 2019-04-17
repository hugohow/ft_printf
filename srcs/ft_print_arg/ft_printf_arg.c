/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:38 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/17 20:28:33 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char *ft_flag_replace(char *str, char *to_replace)
{
    str[ft_strlen(str) - 1] = '\0';
    return (ft_strcat(str, to_replace));
}

void ft_printf_arg(va_list *ap, char *str, size_t *len, t_ht *hash_table)
{
	t_flag *flag;
    
	flag = ft_create_flag(str);

    t_ft fct;
    t_node_ht *node;

    node = ft_ht_get(hash_table, flag->key);
    if (node != NULL)
    {
        fct = node->datum;
        fct(ap, str, len, flag);
    }
    free(flag);
    flag = NULL;
}