/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:26:23 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 11:05:16 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1++ == *str2++)
		if (*str1 == '\0')
			return (0);
	return ((*(unsigned char *)str1 < *(unsigned char *)str2) ? -1 : +1);
}