/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:52:56 by alorent-          #+#    #+#             */
/*   Updated: 2018/09/26 18:34:56 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*words_creater(char *str, int *i)
{
	char	*word;
	int		s;

	s = 0;
	while (str[*i] != ' ' && str[*i] != '\n' && str[*i] != '\t'
			&& str[*i] != '\0')
	{
		*i = *i + 1;
		s++;
	}
	if (!(word = (char*)malloc(sizeof(char) * (s + 1))))
		return (0);
	*i = *i - s;
	s = 0;
	while (str[*i] != ' ' && str[*i] != '\n' && str[*i] != '\t'
			&& str[*i] != '\0')
	{
		word[s] = str[*i];
		s++;
		*i = *i + 1;
	}
	*i = *i - 1;
	word[s] = '\0';
	return (word);
}

int		words_count(char *str)
{
	int		count;
	int		i;
	int		j;

	i = 0;
	j = 1;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			j = 1;
		else if (j == 1)
		{
			count++;
			j = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	j = 1;
	k = 0;
	count = words_count(str);
	if (!(array = (char**)malloc(sizeof(char*) * (count + 1))))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			j = 1;
		else if (j == 1)
		{
			array[k++] = words_creater(str, &i);
			j = 0;
		}
		i++;
	}
	array[k] = 0;
	return (array);
}
