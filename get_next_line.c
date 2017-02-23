/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 23:12:35 by chbechet          #+#    #+#             */
/*   Updated: 2017/02/21 04:54:28 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char		*str = NULL;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				ret;
	int				i;
	int				j;

	i = 0;
	j = 0;
	ret = BUFF_SIZE;
	if (fd < 0)
		return (-1);
	while (!str || (ft_strchr(str, '\n') == NULL && ret == BUFF_SIZE))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		buf[ret] = '\0';
		if(!str)
			str = ft_strdup(buf);
		else
			str = ft_strjoin_free(str, buf);
	}
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
	{
		tmp = (char*)malloc(sizeof(char) * (i + 1));
		while (j < i)
		{
			tmp[j] = str[j];
			j++;
		}
		tmp[j] = '\0';
		str = &str[j + 1];
		*line = ft_strdup(tmp);
		free(tmp);
		tmp = NULL;
		return (1);
	}
	if (str && *str)
	{
		*line = ft_strdup(str);
		free(str);
		str = NULL;
		return (1);
	}
	return(0);
}
