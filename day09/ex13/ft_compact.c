/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 05:14:58 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/28 05:17:45 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	create_arr(char **tab, int l, int l_old)
{
	int		i;
	int		k;
	char	*arr[l];

	i = 0;
	k = 0;
	if (l <= 0)
		return (0);
	while (i < l_old)
	{
		if (tab[i] != 0)
			arr[k++] = tab[i];
		i++;
	}
	i = 0;
	while (i < l)
	{
		tab[i] = arr[i];
		i++;
	}
	while (i < l_old)
		tab[i++] = 0;
	return (**arr);
}

int		ft_compact(char **tab, int length)
{
	int i;
	int sum;
	int h;

	i = 0;
	sum = 0;
	while (i < length)
	{
		if (tab[i] != 0)
			sum++;
		i++;
	}
	h = create_arr(tab, sum, length);
	return (sum);
}
