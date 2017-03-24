/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:54:27 by chbechet          #+#    #+#             */
/*   Updated: 2017/03/24 11:19:58 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

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
