/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 21:01:43 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/07 14:36:30 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		get_str_len(int n, int base)
{
	int		i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char			*ft_itoa_base(int value, int base)
{
	int		str_len;
	char	*str;
	char	base_string[17];

	ft_strcpy(base_string, "0123456789ABCDEF");
	if (value == 0 || base < 2 || base > 16)
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
	str[--str_len] = base_string[value % base];
	while (value /= base)
		str[--str_len] = base_string[value % base];
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}
