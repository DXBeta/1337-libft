/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:20:58 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/17 13:57:31 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned char	*pt1;
	unsigned char	*pt2;
	size_t			i;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	i = 0;
	while (pt1[i] && pt2[i] && pt1[i] == pt2[i] && i < n -1)
	{
		i++;
	}
	return (pt1[i] - pt2[i]);
}
