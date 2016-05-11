/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stncat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 06:22:03 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 07:08:39 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	const size_t dstlen = ft_strlen(dst);
	const size_t srclen = ft_strlen(src);

	ft_memcpy(dst + dstlen, src, srclen + 1);
	return (dst);
}
