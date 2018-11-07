/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:21:41 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/02 12:45:26 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putcharch(int *tab, int length, void (*f)(int))
{
	while (length--)
		f(*tab++);
}