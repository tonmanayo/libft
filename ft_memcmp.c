/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:56:36 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 15:03:35 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n--)
	{
		u1 = *(unsigned char*)s1;
		u2 = *(unsigned char*)s2;
		if (u1 != u2)
			return (u1 - u2);
		s1++;
		s2++;
	}
	return (0);
}
