/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:15:03 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/26 13:52:08 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*item;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	temp = lst;
	while (temp != NULL)
	{
		item = ft_lstnew(f(temp->content));
		if (!item)
		{
			ft_lstclear(&new_list, del);
			return (new_list);
		}
		ft_lstadd_back(&new_list, item);
		temp = temp->next;
	}
	return (new_list);
}
