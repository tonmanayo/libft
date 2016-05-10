/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 12:05:36 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 12:21:16 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*srce;
	unsigned char	*dest;

	i = 0;
	srce = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = srce[i];
		if (dest[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
