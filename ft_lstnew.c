/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmenegau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:23:44 by rmenegau          #+#    #+#             */
/*   Updated: 2015/12/18 16:43:41 by rmenegau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list != NULL)
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			list->content = ft_memalloc(content_size);
			list->content = ft_memmove(list->content, content, content_size);
			list->content_size = content_size;
		}
		list->next = NULL;
	}
	return (list);
}
