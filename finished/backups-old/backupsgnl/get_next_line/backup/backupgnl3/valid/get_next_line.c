/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:34:54 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/11 16:05:40 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <stdio.h>

static void		add_line(char **stay, char *buf)
{
	char	*tmp;

	tmp = NULL;
	if (*stay)
	{
		tmp = ft_strdup(*stay);
		ft_memdel((void **)stay);
		*stay = ft_strjoin(tmp, buf);
		free(tmp);
		tmp = NULL;
	}
	else
		*stay = ft_strdup(buf);
}

static int		get_line(char **stay, char **line)
{
	char	*tmp;

	tmp = ft_strchr(*stay, '\n');
	if (tmp)
	{
		*line = ft_strsub(*stay, 0, tmp - *stay);
		ft_memmove(*stay, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	int			i;
	char		buff[BUFF_SIZE + 1];
	static char	*fill = NULL;

	if (BUFF_SIZE == 0)
		return (0);
	if (fd < 0 || !line)
		return (-1);
	if (fill && get_line(&fill, line))
		return (1);
	while ((i = read(fd, buff, BUFF_SIZE)))
	{
		if (i == -1)
			return (-1);
		buff[i] = '\0';
		add_line(&fill, buff);
		if (get_line(&fill, line))
			return (1);
	}
	if (fill == NULL || fill[0] == '\0')
		return (0);
	*line = fill;
	fill = NULL;
	return (1);
}