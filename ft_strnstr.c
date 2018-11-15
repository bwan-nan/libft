/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:48:35 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/15 11:11:04 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (needle[j])
		j++;
	if (j + 1 < len)
		return (NULL);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (k < len && (haystack[i + k] == needle[k]))
				k++;
			if (k == j)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
