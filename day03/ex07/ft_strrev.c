/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:14:56 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/21 11:14:41 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int len;
	int ph;

	i = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	while (i < len - 1)
	{
		ph = str[i];
		str[i] = str[len - 1];
		str[len - 1] = ph;
		len--;
		i++;
	}
	return (str);
}
