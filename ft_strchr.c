/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 09:40:25 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 08:38:50 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns the first occurance of c
*/

char	*ft_strchr(const char *s, int c)
{
	const char ch = c;

	while (*s != ch)
		s++;
	if (*s == '\0')
		return (0);
	return (char *)s;
}
