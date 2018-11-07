/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:45 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/07 17:58:46 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	char str[50];
	char b[50];

	ft_strcpy(str, "this is a simple test");
	bzero(str + 10, 10);
	ft_putstr(str);
	ft_putchar('\n');
	ft_strcpy(b, "this is a simple test");
	ft_bzero(b + 10, 10);
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
