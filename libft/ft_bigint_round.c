/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigint_round.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:55:38 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/30 22:27:12 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static char	*ft_bigint_trim_left(char *str)
{
	size_t	nb;
	size_t	i;
	size_t	len;

	nb = 0;
	len = ft_strlen(str);
	while (str[nb] && str[nb] == '0')
		nb++;
	if (str[nb] == '.')
		nb--;
	if (nb == 0)
		return (str);
	i = 0;
	while (str[i] && i + nb <= len)
	{
		str[i] = str[i + nb];
		i++;
	}
	while (i != len)
	{
		str[i] = ' ';
		i++;
	}
	return (str);
}

static char *get_to_add(int n)
{
	int i;
	char *to_add;

	to_add = (char *)ft_memalloc((n + 3) * sizeof(char));
	to_add = ft_strcpy(to_add, "0.1");
	i = 2;
	while (n != 0)
	{
		to_add[i] = '0';
		i++;
		n--;
	}
	to_add[i] = '1';
	i++;
	to_add[i] = 0;
    return (to_add);
}

static int get_index(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] && str[i] != c)
        i++;
	return (i);
}


char *ft_bigint_round(char *dst, int precision, size_t limit)
{
	int i;
	char *to_add;
	int precision_cpy;


	if (precision < 0)
		return (dst);
	precision_cpy = precision;
	i = get_index(dst, '.');
	if (dst[i] == 0)
		dst[i] = '.';
	i++;
	while (dst[i] && precision != 0)
	{
		i++;
		precision--;
	}
	if (dst[i] == 0)
	{
		while (precision != 0 && i < (int)limit)
		{
			dst[i] = '0';
			i++;
			precision--;
		}
		if (dst[i - 1] == '.')
			i--;
		dst[i] = '\0';
		return (ft_bigint_trim_left(dst));
	}
	else if (dst[i] == '5' && dst[i + 1] == 0)
	{
		if (i < (int)limit)
		{
			int j;

			j = i - 1;
			if (dst[i - 1] == '.')
			{
				i--;
				j--;
			}
			if ((dst[j] - '0') % 2 == 0)
			{
				dst[i] = 0;
				return (ft_bigint_trim_left(dst));	
			}
			else
			{
				to_add = get_to_add(precision_cpy);
				dst = ft_bigint_add(dst, to_add, limit);
				free(to_add);
				return (ft_bigint_round(dst, precision_cpy, limit));
			}
		}
		return (NULL);
	}
	else if (dst[i] < '5')
	{
		if (i < (int)limit)
		{
			if (dst[i - 1] == '.')
				i--;
			dst[i] = 0;
			return (ft_bigint_trim_left(dst));
		}
		return (NULL);
	}
	to_add = get_to_add(precision_cpy);
	dst = ft_bigint_add(dst, to_add, limit);
	free(to_add);
	return (ft_bigint_round(dst, precision_cpy, limit));
}
