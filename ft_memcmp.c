/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:44:43 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/14 15:55:21 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*_s1;
	const char	*_s2;

	i = 1;
	_s1 = (const char *)s1;
	_s2 = (const char *)s2;
	if (n == 0)
		return (0);
	while (i < n && (unsigned char)*_s1 == (unsigned char)*_s2)
		{
			_s1++;
			_s2++;
			i++;
		}
	return ((unsigned char)*_s1 - (unsigned char)*_s2);
}
