/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:40:13 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/07 16:59:05 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (needle[j])
		j++;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (k <= j && (haystack[i + k] == needle[k]))
				k++;
			if (k == j)
				return ((haystack + i));
		}
		i++;
	}
	return (0);
}
