/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 05:43:49 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 14:35:13 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char				*ptr;
	unsigned int		i;
	unsigned int		j;
	unsigned int		k;

	i = start;
	k = 0;
	if (!str)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	if (i == start)
	{
		j = i;
		while (j < len + i)
		{
			ptr[k] = str[j];
			j++;
			k++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
	return (ptr);
}
