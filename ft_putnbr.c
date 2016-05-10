/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 07:53:58 by tmack             #+#    #+#             */
/*   Updated: 2016/05/09 08:07:50 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putnbr(int nbr)
{
	if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;	
		}
		if (nbr > 10)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
			else
				ft_putchar(nbr + '0');
}