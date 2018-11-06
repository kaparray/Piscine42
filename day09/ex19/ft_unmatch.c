/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 11:26:08 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/28 11:34:42 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_unmatch(int *tab, int length)
{
	int i;
	int count;
	int j;

	i = 0;
	while (i < length)
	{
		j = 0;
		count = 0;
		while (tab[j] < length)
		{
			if (tab[j] == tab[i])
				count++;
			j++;
		}
		if (count % 2)
			return (tab[i]);
		i++;
	}
	return (0);
}
