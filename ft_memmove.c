/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:44:53 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/14 14:46:18 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*_src;
	char	*_dst;
	size_t	i;

	i = -1;
	_src = (char *)src;
	_dst = (char *)dst;
	if (_src < _dst)
		while (len--)
			_dst[len] = _src[len];
	else
		while (++i < len)
			_dst[i] = _src[i];
	return (dst);

}
