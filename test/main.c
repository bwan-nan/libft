/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:54:59 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/07 15:34:12 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int main()
{
	char str[50];
	char b[50];
	ft_strcpy(str, "t");
	memset(str, '#', 4);
	ft_putstr(str);
	ft_putchar('\n');
	ft_strcpy(b, "t");
	ft_memset(b, '#', 4);
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
