/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:51:20 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/20 17:31:06 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char *str)
{
	int		fd;
	char	c;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1) > 0)
		ft_putchar(c);
	close(fd);
	return (1);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
