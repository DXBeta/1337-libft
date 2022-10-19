/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:20:09 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/19 21:30:09 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_exist(const char *pt, char c)
{
	int	count;

	count = 0;
	while (pt[count])
	{
		if (pt[count] == c)
			return (1);
		count++;
	}
	return (0);
}

int	get_end(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1);
	while (--len)
	{
		if (is_exist(set, s1[len]) == 0)
			return (len);
	}
	return (0);
}

int	get_start(const char *s1, const char *set)
{
	int	count;

	count = 0;
	while (s1[count])
	{
		if (is_exist(set, s1[count]) == 0)
			return (count);
		count++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return ((char *)s1);
	i = get_start(s1, set);
	j = get_end(s1, set);
	if (i < 0)
		return (ft_strdup(""));
	if (!s1 || !set)
		return ((char *)s1);
	return (ft_substr(s1 + i, 0, (j - i + 1)));
}
