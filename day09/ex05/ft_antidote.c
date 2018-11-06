/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:43:19 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/27 21:46:04 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int	temp;

	if (i > j)
	{
		temp = i;
		i = j;
		j = temp;
	}
	if (i > k)
	{
		temp = i;
		i = k;
		k = temp;
	}
	if (j > k)
	{
		temp = j;
		j = k;
		k = temp;
	}
	return (j);
}
