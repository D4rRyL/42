/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:07:35 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 08:22:55 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = ((char*)dest);
	s2 = ((char*)src);
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (char)c)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
