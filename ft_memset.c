/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:29:27 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 08:21:55 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	d;

	i = 0;
	d = (unsigned char)c;
	while (i < len)
	{
		((char*)b)[i] = d;
		i++;
	}
	return (b);
}
