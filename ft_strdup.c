/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:35:29 by tmack             #+#    #+#             */
/*   Updated: 2016/05/09 11:42:47 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char *news1;

	news1 = (char *)malloc(sizeof(news1) * (ft_strlen(s1) + 1));
	if (news1 = NULL)
		return (NULL);
	else
		return (ft_strcpy(news1, s1));
}
