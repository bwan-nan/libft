/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:55:23 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/09 16:57:58 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *restrict s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}
