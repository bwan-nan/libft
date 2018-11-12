/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:45 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/12 18:07:31 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	printf("%d\n", atoi(av[1]));
	printf("%d", ft_atoi(av[1]));
	return (0);
}
