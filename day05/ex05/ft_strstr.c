/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:32:45 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/24 20:49:06 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
		if (to_find[j] == '\0')
			return (&str[i - j]);
	}
	return (0);
}
