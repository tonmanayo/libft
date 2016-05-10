/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 10:48:56 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 11:11:50 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	if (len == 0)
		return (b);
	cur = (unsigned char *)b;
	while (len--)
	{
		*cur = (unsigned char)c;
		if (len)
			cur++;
	}
	return (b);
}
