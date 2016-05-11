/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:54:26 by tmack             #+#    #+#             */
/*   Updated: 2016/05/11 17:01:48 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = NULL;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, &s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
