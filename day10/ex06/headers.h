/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:57:48 by hpowlows          #+#    #+#             */
/*   Updated: 2018/10/02 12:35:05 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_sum(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);

typedef struct	s_opp
{
	char	operation;
	int		(*func)(int, int);
}				t_opp;

t_opp g_arr_op[] =
{
	{'*', &ft_mul},
	{'/', &ft_div},
	{'+', &ft_sum},
	{'-', &ft_sub},
	{'%', &ft_mod}
};

#endif
