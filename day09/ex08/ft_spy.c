/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 01:01:23 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/28 01:01:27 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	lower(char *str)
{
	while (*str)
	{
		if (*str > 64 && *str < 91)
		{
			*str += 32;
		}
		str++;
	}
}

int		alert(char *str, char *find)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && *find && *str == *find)
	{
		str++;
		find++;
	}
	if (*find == '\0' && (*str == '\0' || *str == ' '))
	{
		return (1);
	}
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int			i;
	int			j;
	char		*a;
	char		*b;
	char		*c;

	a = "president";
	b = "attack";
	c = "bauer";
	i = 1;
	j = 0;
	while (i < argc)
	{
		lower(argv[i]);
		if (alert(argv[i], a) ||
				alert(argv[i], b) ||
				alert(argv[i], c))
			ft_putstr("Alert!!!\n");
		i++;
	}
	return (0);
}
