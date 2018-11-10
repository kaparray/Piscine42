/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:33:31 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:51:59 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *last;
	t_list *right_now;
	t_list *link;

	right_now = *begin_list;
	last = 0;
	link = 0;
	while (right_now)
	{
		if ((*cmp)(right_now->data, data_ref) == 0)
		{
			if (right_now == *begin_list)
				*begin_list = right_now->next;
			else
				last->next = right_now->next;
			link = right_now;
			right_now = link->next;
			free(link);
		}
		else
		{
			last = right_now;
			right_now = right_now->next;
		}
	}
}
