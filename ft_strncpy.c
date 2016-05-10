/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:46:07 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 17:02:44 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** coppies from source string to destination string, but only i units 
*/

char	*ft_strncpy(char *dest, char *src, int i)
{
	char *s;

	*s = dest;
	while (i > 0 && *src != '\0')
	{
		*s++ = *src++;
		--i;
	}
	while (i > 0)
	{
		*s++ = '\0';
		--i;
	}
	return (dest);
}
