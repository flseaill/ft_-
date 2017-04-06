/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:44:08 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/04 13:50:44 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_filesize(char *str)
{
	int		fd;
	char	c;
	int		i;

	fd = open(str, O_RDONLY);
	i = -1;
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1) > 0)
		i++;
	close(fd);
	return (i);
}
