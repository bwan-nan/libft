/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:24:50 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/08 19:50:42 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/*
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*str1;
	const char	*str2;
	unsigned int		i;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < n)
	{
		str1[n + i] = str2[n + i];
		i++;
	}
	return (0);
}
*/
int main(void)
{
	char a[50];
	char b[50];
	char c[50];
	char d[50];
	
	ft_strcpy(a, "bonjour tout le monde comment ca va");
	ft_strcpy(c, "bonjour tout le monde comment ca va");
	ft_strcpy(b, "salut");
	ft_strcpy(d, "salut");
	memcpy(a, b, 5);
	ft_putstr(a);
	ft_putchar('\n');
	ft_memcpy(c, d, 5);
	ft_putstr(c);
	return (0);
}
