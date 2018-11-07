/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:56:39 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/07 17:56:40 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
		return (0);
	return (ft_strcpy(dest, src));
}
