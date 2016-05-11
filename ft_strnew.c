/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 14:58:01 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 15:39:02 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *temp;

	temp = (char *)malloc(size);
	if (temp == NULL)
		return (NULL);
	ft_bzero(temp, size);
	temp[size] = '\0';
	return (temp);
}
