/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:51:50 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 08:11:07 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	int			k;

	i = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		j = i;
		k = 0;
		while (big[j] == little[k] && j < len)
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char*)(&big[i]));
		}
		i++;
	}
	return (0);
}
