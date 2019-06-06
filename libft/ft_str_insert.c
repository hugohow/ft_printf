/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:35:47 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/06 13:19:54 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_str_insert("abc", ' ', 0) = " abc"
*/

char		*ft_str_insert(char *str, char c, int index)
{
	char	*tmp;
	char	*output;
	int		j;

	j = 0;
	tmp = (char *)ft_memalloc((index + 2) * sizeof(*tmp));
	if (tmp == NULL || str == NULL)
		return (NULL);
	ft_strncpy(tmp, str, index);
	tmp[index] = c;
	tmp[index + 1] = '\0';
	output = ft_strjoin(tmp, str + index);
	free(tmp);
	tmp = NULL;
	free(str);
	str = NULL;
	return (output);
}
