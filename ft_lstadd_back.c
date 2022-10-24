/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:20:07 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/24 13:06:01 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_elt;

	last_elt = *alst;
	while (last_elt && last_elt->next)
	{
		last_elt = last_elt->next;
	}
	if (last_elt)
		last_elt->next = new;
	else
		*alst = new;
}
