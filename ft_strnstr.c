/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:53:08 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/21 14:28:31 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (!len)
		return (0);
	while (*s1 && len-- >= len_s2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
