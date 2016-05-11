/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:44:19 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 09:39:36 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *a;
	char *b;

	b = (char *)needle;
	if (*b == 0)
		return ((char *)haystack);
	while (*haystack != 0)
	{
		if (*haystack != *b)
			continue ;
		a = (char *)haystack;
		while (1)
		{
			if (*b == 0)
				return ((char *)haystack);
			if (*a++ != *b++)
				break ;
		}
		b = (char *)needle;
		haystack += 1;
	}
	return (NULL);
}
