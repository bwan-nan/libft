/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:53:57 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/11/07 17:53:59 by bwan-nan         ###   ########.fr       */
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
