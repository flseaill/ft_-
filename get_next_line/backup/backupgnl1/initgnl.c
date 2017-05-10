/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:03:44 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/07 01:23:43 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	**init_tab(int fd)
{
	char	**line;
	int		*size;
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c != '\n')
			j++;
		else
		{
			size[i] = j;
			j = 0;
			i++;
		}
		c++;
	}
	if (!(line = malloc(sizeof(char *) * i)))
		return (NULL);
	while (i >=  0)
		if (!(line[i] = malloc(sizeof(char) * size[i])))
			return (NULL);
		i--;
	close(fd);
	return (line);
}

int		main(int argc, char *argv[])
{
	int fd;
	char **line;

	line = 0;
	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
	{
		line = init_tab(fd);
		get_next_line(fd, line);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
