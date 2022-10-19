/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:42:41 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/16 15:19:42 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int x, size_t n)
{
	size_t				i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = x;
		i++;
	}
	return (str);
}
