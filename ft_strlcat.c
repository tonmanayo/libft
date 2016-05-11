/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 07:26:00 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 08:34:26 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t srclen = ft_strlen(src);
	const size_t dstlen = ft_strlen(dst);

	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		memcpy(dst + dstlen, src, size - 1);
		dst[dstlen + size - 1] = '\0';
	}
	return (dstlen + srclen);
}
