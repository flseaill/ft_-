/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:46:30 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/23 22:46:54 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char *argv[])
{
	int fd;
	char **line;

	line = 0;
	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
		get_next_line(fd, line);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
