/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 21:01:43 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/28 00:41:21 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	get_str_len(int n, int base)
{
	size_t		i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(int value, int base)
{
	size_t	str_len;
	char	*str;
	char	*base_string;
	
	base_string = "0123456789ABCDEF";
	if (value == 0)
		return ("0");
	str_len = get_str_len(value, base);
	if (value < 0)
	{
		if (base == 10)
			str_len += 1;
		value *= -1;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	while (value)
	{
		str[--str_len] = base_string[value % base];
		value /= base;
	}
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}
