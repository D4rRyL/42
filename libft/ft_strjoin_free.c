/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 00:06:46 by chbechet          #+#    #+#             */
/*   Updated: 2017/02/21 01:22:41 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*tmp;
	char	*str;
	int		len;

	if (!(s1) || !(s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char*)malloc(sizeof(*tmp) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	str = ft_strdup(tmp);
	free(tmp);
	return (str);
}
