/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:17:28 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/04/23 19:30:33 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_add_element(char *str, t_flag *flag, int index)
{
    char *output;

    if (flag->minus == 0 && str[0] == ' ')
    {
        int j;
        j = 0;
        while (j < index - 1)
        {
            str[j] = str[j + 1];
            j++;
        }
        str[index] = '0';
        return (str); 
    }
    else
    {
        char *tmp;
        int j;
        j = 0;
        tmp = malloc((index + 2) * sizeof(char));
        while (j < index)
        {
            tmp[j] = str[j];
            j++;
        }
        tmp[j] = '0';
        j++;
        tmp[j] = '\0';
        output = ft_strjoin(tmp, str + index);
        free(tmp);
        tmp = NULL;
        free(str);
        str = NULL;
        return (output);
    }
}
