/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:30:38 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/11 14:30:53 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = ft_strlen(src);
	dst = malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	else
	{
		ft_strlcpy(dst, src, i + 1);
		return (dst);
	}
}
