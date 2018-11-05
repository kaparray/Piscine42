/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:43:18 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/25 18:37:05 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fr_putchar(char c);

void	ft_print_program_mane(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_print_program_mane(argv[0]);
	return (0);
}
