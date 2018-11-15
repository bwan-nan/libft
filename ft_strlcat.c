/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:22 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/15 10:24:08 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dst_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(dst));
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize && dstsize >= dst_len)
		dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + dst_len);
}
/*
   int main(void)
   {
   char a[80];
   char b[80];
   char c[80];
   char d[80];
   char e[80];
   char f[80];

   ft_strcpy(a, "Bonjour c un test");
   ft_strcpy(b, "Salut tout le monde");
   ft_strcpy(c, "Bonjour c un test");
   ft_strcpy(d, "Salut tout le monde");
   ft_strcpy(e, "Bonjour c un test");
   ft_strcpy(f, "Salut tout le monde");


   ft_putstr("strlen(dst) = ");
   ft_putnbr(ft_strlen(a));
   ft_putchar('\n');

   ft_putstr("strlen(src) = ");
   ft_putnbr(ft_strlen(b));
   ft_putchar('\n');

   ft_putstr("strncat : ");
   ft_putstr(strncat(a, b, 50));
   ft_putchar('\n');

   ft_putstr("ft_strlen(strncat()) : ");
   ft_putnbr(ft_strlen(strncat(c, d, 50)));
   ft_putchar('\n');

   ft_putstr("strlcat : ");
   ft_putnbr(strlcat(e, f, 50));
   return (0);
   }
   */
