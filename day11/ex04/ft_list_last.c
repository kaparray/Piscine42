/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:10:46 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:10:49 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *node;

	if (!begin_list)
	{
		return (0);
	}
	node = begin_list;
	while (node->next)
	{
		node = node->next;
	}
	return (node);
}
