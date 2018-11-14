/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:55:56 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/14 13:22:31 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int j;
	int sign;
	unsigned long result;

	i = 0;
	j = -1;
	sign = 1;
	result = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i + ++j] >= 48 && nptr[i + j] <= 57)
		result = result * 10 + nptr[i + j] - 48;
	if (result > 9223372036854775807 || j > 19)
		return (sign == -1 ? 0 : -1);
	return (sign * result);
}
