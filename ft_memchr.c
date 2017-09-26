/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:45:54 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/16 21:14:20 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n != 0)
	{
		if (((char*)str)[i] == (char)c)
			return (&((char*)str)[i]);
		i++;
		n = n - 1;
	}
	return (NULL);
}
