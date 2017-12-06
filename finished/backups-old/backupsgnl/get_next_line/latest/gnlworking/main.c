/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 17:44:57 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/21 17:48:18 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	char	**line;
	int		fd;

	if (!(line = malloc(1)))
		return (-1);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, line))
			printf("%s\n", *line);
		printf("\n%s%d\n", "Return de gnl = ", get_next_line(fd, line));
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
