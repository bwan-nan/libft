/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:22 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/09 15:49:31 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
size_t		ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{

}
*/

int main(void)
{
	char a[80];
	char b[80];
	char c[80];
	char d[80];
	char e[80];
	char f[80];

	ft_strcpy(a, "Bonjour");
	ft_strcpy(b, "Salut tout le monde");
	ft_strcpy(c, "Bonjour");
	ft_strcpy(d, "Salut tout le monde");
	ft_strcpy(e, "Bonjour");
	ft_strcpy(f, "Salut tout le monde");


	ft_putstr("strlen(dst) = ");
	ft_putnbr(ft_strlen(a));
	ft_putchar('\n');

	ft_putstr("strlen(src) = ");
	ft_putnbr(ft_strlen(b));
	ft_putchar('\n');

	ft_putstr("strncat : ");
	ft_putstr(strncat(a, b, 2));
	ft_putchar('\n');

	ft_putstr("ft_strlen(strncat()) : ");
	ft_putnbr(ft_strlen(strncat(c, d, 2)));
	ft_putchar('\n');

	ft_putstr("strlcat : ");
	ft_putnbr(strlcat(e, f, 2));
	return (0);
}
