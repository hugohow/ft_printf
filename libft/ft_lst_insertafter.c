/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_insertafter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 13:29:19 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/05/08 17:51:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_insertafter(\
	t_list **head, void const *content, size_t content_size)
{
	t_list	*node;
	t_list	*node_tmp;

	node = ft_lstnew(content, content_size);
	if (*head == NULL)
		*head = node;
	else
	{
		node_tmp = *head;
		while (node_tmp->next)
			node_tmp = node_tmp->next;
		node_tmp->next = node;
	}
	return (node);
}
