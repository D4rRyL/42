/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 23:23:08 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/23 11:47:29 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_firstspace(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		return (i);
	}
	return (0);
}

char			*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = ft_firstspace((char*)str);
	if (str)
	{
		j = ft_strlen(str) - 1;
		while ((str[j] == ' ' || str[j] == '\n' || str[j] == '\t') && j >= i)
			j--;
		j++;
		if ((tmp = (char*)malloc(sizeof(char) * j - i + 1)) == NULL)
			return (NULL);
		k = 0;
		while (i < j)
		{
			tmp[k] = str[i];
			i++;
			k++;
		}
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
