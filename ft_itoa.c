/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 09:46:08 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/23 12:38:30 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_nbr(int nb, char *str)
{
	int i;
	int j;

	j = 0;
	if (nb < 0)
	{
		str[j] = '-';
		j++;
		nb = nb * -1;
	}
	i = 1;
	while (nb / i > 9)
		i = i * 10;
	while (i != 0)
	{
		str[j] = (nb / i) + '0';
		nb = nb % i;
		i = i / 10;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char			*ft_itoa(int nb)
{
	int		i;
	int		j;
	char	*str;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (nb == 0)
		return (ft_strdup("0"));
	else
	{
		i = 0;
		j = nb;
		if (j < 0)
			i++;
		while (j != 0)
		{
			i++;
			j = j / 10;
		}
		str = (char*)malloc(sizeof(*str) * (i + 1));
		if (str == NULL)
			return (NULL);
		str = ft_nbr(nb, str);
		return (str);
	}
}
