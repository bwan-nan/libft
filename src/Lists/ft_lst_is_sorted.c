/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_is_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:01:35 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/03/02 01:09:52 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lst_is_sorted(t_list *list, int (*cmp)(void *, void *))
{
	if (!list)
		return (1);
	if (cmp(list->content, list->next->content) > 0)
		return (ft_lst_is_sorted(list->next, cmp));
	return (0);
}
