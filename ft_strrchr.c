/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:37:03 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/18 19:12:13 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	int		len;

len = ft_strlen(str) + 1;
	if (!str)
		return (0);
	while (len)
	{
		len--;
		if (*(str + len) == (char)x)
			return ((char *)(str + len));
	}
	return (0);
}
