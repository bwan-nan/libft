/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:45 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/09 17:53:27 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int		main(void)
{

	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);

	ft_putstr(i1);
	ft_putchar('\n');
	ft_putstr(i2);
	ft_putchar('\n');
	return (0);
}
