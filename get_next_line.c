/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 23:12:35 by chbechet          #+#    #+#             */
/*   Updated: 2017/02/26 19:23:41 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_read(const int fd, char *str)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];

	ret = BUFF_SIZE;
	while (!str || (ft_strchr(str, '\n') == NULL && ret == BUFF_SIZE))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (NULL);
		buf[ret] = '\0';
		if (!str)
			str = ft_strdup(buf);
		else
			str = ft_strjoin(str, buf);
	}
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str = NULL;
	char			*tmp;

	if (fd < 0)
		return (-1);
	if ((str = ft_read(fd, str)) == NULL)
		return (-1);
	if ((tmp = ft_strchr(str, '\n')) != NULL)
	{
		*tmp = '\0';
		*line = ft_strdup(str);
		str = tmp + 1;
		return (1);
	}
	if (str && *str)
	{
		*line = ft_strdup(str);
		ft_strdel(&str);
		return (1);
	}
	return (0);
}
