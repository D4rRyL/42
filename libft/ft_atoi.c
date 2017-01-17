/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 04:33:33 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/23 12:22:18 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					sign;
	int					res;

	sign = 1;
	res = 0;
	while (*str == '\r' || *str == '\t' || *str == '\f' || *str == '\v'
			|| *str == '\n' || *str == ' ' || *str == '\0')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
