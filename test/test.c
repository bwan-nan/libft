/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:04:05 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/09 17:07:20 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
		ft_putnbr(atoi(av[1]));
	}
	return (0);
}
