/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 23:12:35 by chbechet          #+#    #+#             */
/*   Updated: 2017/02/25 21:37:39 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
static char     *ft_read(const int fd, char *str)
{
	int             ret;
	char            buf[BUFF_SIZE + 1];
	char            *tmp;
	ret = BUFF_SIZE;
	while (!str || (ft_strchr(str, '\n') == NULL && ret == BUFF_SIZE))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (NULL);
		buf[ret] = '\0';
		if(!str)
			str = ft_strdup(buf);
		else
			str = ft_strjoin(str, buf);
	}
	return (str);
}
static int  ft_last_line(char **str, char **line)
{
	*line = ft_strdup(*str);
	free(*str);
	*str = NULL;
	return (1);
}
int     get_next_line(const int fd, char **line)
{
	static char     *str = NULL;
	char            *tmp;
	int             i;
	i = 0;
	if (fd < 0)
		return (-1);
	if ((str = ft_read(fd, str)) == NULL)
		return (-1);
	while (str[i] && str[i] != '\n')
		i++;
	if ((tmp = ft_strchr(str, '\n')) != NULL)
	{
		*tmp = '\0';
		*line = ft_strdup(str);
		str = &str[i + 1];
		return (1);
	}
	if (str && *str)
		return (ft_last_line(&str, line));
	return(0);
}
