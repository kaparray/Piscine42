/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:42:34 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/27 17:42:50 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hr;

	hr = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hr, (hr + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hr % 12, (hr + 1) % 12);
	else if (hour == 23)
		printf("11.00 P.M AND 12.00 A.M.\n");
	else
		return ;
}
