/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 14:51:42 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 15:39:33 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
