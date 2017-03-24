/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:43:14 by chbechet          #+#    #+#             */
/*   Updated: 2017/03/24 11:45:24 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tab_number(int **tab, int nb_l, int nb_col)
{
	int i;
	int j;

	i = 0;
	while (i < nb_l)
	{
		j = 0;
		while (j < nb_col)
		{
			ft_putnbr(tab[i][j]);
			j++;
		}
		i++;
	}
}
