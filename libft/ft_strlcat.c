/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 23:39:18 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/23 12:44:18 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	i = j;
	k = 0;
	if (i == size)
		return (ft_strlen(src) + i);
	while (src[k] != '\0' && j < size - 1)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	if (i < size)
		dest[j] = '\0';
	return (ft_strlen(src) + i);
}
