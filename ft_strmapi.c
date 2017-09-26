/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 05:30:50 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 08:14:50 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (str == NULL || f == NULL)
		return (NULL);
	i = 0;
	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(str) + 1));
	if (ptr)
	{
		while (str[i])
		{
			ptr[i] = f(i, str[i]);
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
