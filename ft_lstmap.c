/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:24:15 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/08 21:22:06 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *curr;
	t_list *root;
	t_list *copy;

	if (!(lst && f))
		return (NULL);
	while (lst)
	{
		if ((copy = f(lst)) != NULL)
		{
			if (curr)
			{
				curr->next = ft_lstnew(copy->content, copy->content_size);
				curr = curr->next;
			}
			else
			{
				curr = ft_lstnew(copy->content, copy->content_size);
				root = curr;
			}
		}
		lst = lst->next;
	}
	return (root);
}
