/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 22:46:42 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/27 22:50:24 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int count;

	count = 0;
	if (base % 2)
	{
		base *= 3;
		base++;
	}
	else
	{
		base /= 2;
	}
	if (base > 1)
		count = ft_collatz_conjecture(base);
	return (count + 1);
}
