/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:45 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/08 20:13:02 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	char str[50];
	char b[50];

	ft_strcpy(str, "this is a simple test");
	ft_putstr(memset(str + 4, '#', 5));
	ft_putchar('\n');
	ft_strcpy(b, "this is a simple test");
	ft_putstr(ft_memset(b + 4, '#', 5));
	ft_putchar('\n');
	return (0);
}
