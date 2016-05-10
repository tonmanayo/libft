/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:00:17 by tmack             #+#    #+#             */
/*   Updated: 2016/05/10 15:45:33 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** this is how to add a comment
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len);
void	ft_bzero(char *to, int count);
void    *ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *c);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int i);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char *strstr(const char *haystack, const char *needle);

