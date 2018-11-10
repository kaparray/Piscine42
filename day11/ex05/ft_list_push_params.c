/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:11:17 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/03 15:23:08 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*t_push;

	t_push = 0;
	while (ac > 0)
	{
		ft_list_push_back(&t_push, av[ac]);
		ac--;
	}
	return (t_push);
}
