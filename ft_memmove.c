/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:22:09 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/12 17:49:52 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*_dst;
	char	*original;
	char	*_src;

	_dst = (char *)dst;
	_src = (char *)src;
	original = (char *)dst;
	i = 0;
	while (i < len)
	{
		_dst[i] = _src[i];
		i++;
	}
	return (original);
}
