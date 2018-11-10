/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:54:55 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:56:53 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_marge(t_list **begin_list1, t_list *begin_list2)
{
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		while (*begin_list1)
			*begin_list1->next;
		*begin_list1->next = begin_list2;
	}
}
