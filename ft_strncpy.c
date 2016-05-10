/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:46:07 by tmack             #+#    #+#             */
/*   Updated: 2016/05/09 09:22:49 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
