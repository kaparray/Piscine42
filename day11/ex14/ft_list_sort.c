/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:57:27 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:57:29 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*link;
	t_list		*last;
	t_list		*right_now;

	right_now = *begin_list;
	while (right_now->next)
	{
		if ((*cmp)(right_now->data, right_now->next->data) > 0)
		{
			if (right_now != *begin_list)
				last->next = right_now->next;
			else
				*begin_list = right_now->next;
			link = right_now->next->next;
			right_now->next->next = right_now;
			right_now->next = link;
			right_now = *begin_list;
		}
		else
		{
			last = right_now;
			right_now = right_now->next;
		}
	}
}
