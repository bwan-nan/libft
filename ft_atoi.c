/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:55:56 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/09 17:31:45 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int sign;
	long int result;

	i = 0;
	sign = 1;
	result = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] == '-' || nptr[i] == '+')
			return (0);
		if (nptr[i] == '-')
		{
			sign *= -1;
			ft_putchar('-');
		}
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
		result = result * 10 + nptr[i++] - 48;
	return (result);
}
