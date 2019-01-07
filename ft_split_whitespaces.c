/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:56:31 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/08 00:53:47 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char *str)
{
	int i;
	int num_words;
	int len;

	i = 0;
	num_words = 0;
	len = 0;
	while (str[i])
	{
		if (is_whitespace(str[i])
			len = 0;
		else if (++len == 1)
			num_words++;
		i++;
	}
	return (num_words);
}

char		**ft_split(char *str)
{
	char	**tab;
	int	i;
	int	len;
	int	word_index;

	word_index = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (count_words(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		len = 0;
		while (!(is_whitespace(str[i + len])) && str[i + len])
			len++;
		if (len)
		{
			tab[word_index] = ft_strsub(str, i, len);
			word_index++;
			i += len - 1;
		}
		i++;
	}
	tab[word_index] = 0;
	return (tab);
}
