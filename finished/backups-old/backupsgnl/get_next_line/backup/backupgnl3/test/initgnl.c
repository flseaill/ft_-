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
#include "libft.h"

int		ft_isnl(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int 	ft_filelen(int fd)
{
	int 	c;
	int 	i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		i++;
		c++;
	}
	return (i);
}


int 	ft_filenl(int fd)
{
	int 	c;
	int 	i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (ft_isnl(c))
			i++;
		c++;
	}
	return (i);
}





// int 	ft_filenl(int fd)
// {
// 	int 	c;
// 	int 	i;

// 	i = 0;
// 	while (read(fd, &c, 1) > 0)
// 	{
// 		ft_putstr("PUTAIN");
// 		ft_putchar(c);
// 		if (c == '\n')
// 			i++;
// 		c++;
// 	}
// 	close(fd);
// 	return (i);
// }


// char	*savestr(int fd)
// {
// 	char	*str;
// 	int 	i;
// 	int 	j;
// 	int 	c;

// 	i = 0;
// 	j = 0;
// 	while (read(fd, &c, 1) > 0)
// 	{
// 		i++;
// 		c++;
// 		ft_putchar(str[j]);
// 		str[j] = c;
// 		j++;
// 	}
// 	ft_putstr("allocation de str");
// 	if (!(str = malloc(sizeof(char) * (i + 1))))
// 		return (NULL);
// 	ft_putnbr(i);
// 	str[i] = 0;
// 	i--;
// 	while (read(fd, &c, 1) > 0 && i > j)
// 	{
		
// 	} 
// 	close(fd);
// 	ft_putstr(str);
// 	ft_putstr("fin de savestr");
// 	return (str);
// }



/*char	**init_tab(int fd)
{
	char	**line;
	int		*size;
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	//ft_putstr("Start reading");
	while (read(fd, &c, 1) > 0)
	{
		if (c != '\n')
			j++;
		else
		{
			ft_putstr("enregistrement de la taille de case");
			ft_putchar(j - '0');
			size[i] = j;
			j = 0;
			ft_putchar(size[i] - '0');
			i++;
		}
		c++;
	}
	ft_putstr("allocation de line");
	if (!(line = malloc(sizeof(char *) * i)))
		return (NULL);
	while (i >=  0)
		if (!(line[i] = malloc(sizeof(char) * size[i])))
			return (NULL);
		i--;
	close(fd);
	return (line);
}*/

int		main(int argc, char *argv[])
{
	int fd;
	//char *str;
	//char **line;

	//line = 0;
	fd = 0;
	if (argc == 2)
	{		
		fd = open(argv[1], O_RDONLY);
		ft_putstr("Le fichier fait ");
		ft_putnbr(ft_filelen(fd));
		ft_putstr(" characteres de long.\n");
		close(fd);
		fd = open(argv[1], O_RDONLY);
		ft_putstr("Le fichier fait ");
		ft_putnbr(ft_filenl(fd));
		ft_putstr(" lignes de long.\n");
		close(fd);
		//str = savestr(fd);
		//ft_putstr("enregistrement **line");
		///line = ft_strsplit((const char *)str, '\n');
		//ft_putstr("ft_printtab");
		//ft_printtab(line);
		//get_next_line(fd, line);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
