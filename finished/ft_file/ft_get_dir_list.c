/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:30:08 by flseaill          #+#    #+#             */
/*   Updated: 2017/11/28 20:52:34 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../../ft_ls/ft_ls.h"

int					ft_list_dir(char *path, int opt_a)
{
	DIR*			rep;
	struct dirent*	readfile;
	int		fd;

	rep = opendir(path); /* Ouverture d'un dossier */
	fd = open(path, O_RDONLY);
	if (rep == NULL) /* Si le dossier n'a pas pu être ouvert */
	{
		ft_putstr("ft_ls: ");
		ft_putstr(path);
		ft_putendl(": No such file or directory");
		exit(1); /* (mauvais chemin par exemple) */
	}
	while ((readfile = readdir(rep)) != NULL)
	{
		if (readfile->d_name[0] != '.' && opt_a == 0)
		{
			ft_putendl(readfile->d_name);
			readfile++;
		}
		else
			readfile++;
	}
	if (close(fd) == -1 || closedir(rep) == -1) /* S'il y a eu un souci avec la fermeture */
		exit(-1);
	return (0);
}


int		main(int argc, char **argv)
{
	int		opt_a;

	opt_a = 0;
	if (argc >= 2)
		ft_list_dir(argv[1], opt_a);
	else if (argc == 1)
		//ft_putstr("Folder name missing.\n");
		ft_list_dir("./", opt_a);
	return (0);
}
