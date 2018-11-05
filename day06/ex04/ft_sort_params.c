/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:22:04 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/25 18:22:06 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print(char *ar)
{
	int i;

	i = 0;
	while (ar[i] != '\0')
	{
		ft_putchar(ar[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	while (i < (argc))
	{
		j = i + 1;
		while (j < (argc))
		{
			(ft_strcmp(argv[i], argv[j]) > 0) && (t = argv[i])
				&& (argv[i] = argv[j])
				&& (argv[j] = t);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_print(argv[i]);
		i++;
	}
	return (0);
}
