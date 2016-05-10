/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 17:34:25 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 18:07:25 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	const size_t dstlen = strlen(dst);
	const size_t srclen = strlen(src);

	memcpy(dst + dstlen, src, srclen + 1);
	return (dst);
}
