/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:24:50 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/12 13:48:36 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*str1;
	const char			*str2;
	unsigned int		i;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
