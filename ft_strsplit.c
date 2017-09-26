/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 02:12:27 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/23 15:20:17 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *str, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			j++;
			i++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (j);
}

static char		*add_w(size_t *i, char const *str, char c)
{
	size_t		size;
	size_t		j;
	char		*word;

	size = *i;
	j = 0;
	while (str[size] && str[size] != c)
		size++;
	word = ft_strnew(size - *i);
	if (word)
	{
		while (*i < size)
		{
			word[j] = str[*i];
			j++;
			*i += 1;
		}
		return (word);
	}
	return (0);
}

char			**ft_strsplit(char const *str, char c)
{
	char		**tab;
	size_t		o;
	size_t		*i;
	size_t		j;

	o = 0;
	i = &o;
	j = 0;
	tab = NULL;
	if (str)
		tab = (char**)malloc(sizeof(char*) * (count_w(str, c) + 1));
	if (tab)
	{
		while (j < count_w(str, c))
		{
			while (str[*i] == c)
				*i += 1;
			if (str[*i] != c && str[*i])
				tab[j++] = add_w(i, str, c);
		}
		tab[j] = 0;
		return (tab);
	}
	return (0);
}
