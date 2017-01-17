/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 04:47:51 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/22 08:15:31 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f) (char))
{
	char	*ptr;
	int		i;

	if (str == NULL || f == NULL)
		return (NULL);
	i = 0;
	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(str) + 1));
	if (ptr)
	{
		while (str[i])
		{
			ptr[i] = f(str[i]);
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
