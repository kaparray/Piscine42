/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:58:24 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/02 12:01:33 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_atoi(char *str)
{
	int n;
	int i;
	int isneg;

	n = 0;
	i = 0;
	isneg = 0;
	if (str[i] == '-')
		isneg = 1;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
	{
		if ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v'))
			i++;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-n);
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 10) > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		ft_calculate(int nb1, int op, int nb2)
{
	int i;

	i = 0;
	if (op == '-' || op == '+' || op == '*' || op == '/' || op == '%')
	{
		while (i < 5)
		{
			if (g_arr_op[i].operation == op)
				return (g_arr_op[i].func(nb1, nb2));
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	if (nb2 == 0 && *argv[2] == '%')
		write(1, "Stop : modulo by zero", 21);
	else if (nb2 == 0 && *argv[2] == '/')
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(ft_calculate(nb1, *argv[2], nb2));
	write(1, "\n", 1);
	return (0);
}
