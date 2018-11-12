/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:45 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/12 17:31:53 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	printf("%s\n", memmove(av[1], av[2], ft_atoi(av[3])));
	printf("%s", ft_memmove(av[1], av[2], ft_atoi(av[3])));
	return (0);
}
