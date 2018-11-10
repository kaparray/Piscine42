/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:24:07 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:24:17 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list right_now;
	t_list link;

	right_now = *begin_list;
	while (right_now)
	{
		link = right_now->next;
		free(right_now);
		right_now = link;
	}
	*begin_list = 0;
}
