/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:52:16 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/06 18:47:41 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_readfile(char *str)
{
	int		fd;
	char	c;

	// Ouverture du Fichier
	fd = open(str, O_RDONLY);
		
	// Verif de la validite du fd.
	if (fd == -1)
		// Erreur lors de l'execution de la fonction.
		return (0);
	
	// Fonction a appliquer a chaques char lus.
	while (read(fd, &c, 1) > 0)
	
	// Fermeture du fichier.
	close(fd);
	
	// La fonction s'est bien execute.
	return (1);
}

int		main(int argc, char *argv[])
{
	// Verif du nombre de parametres.
	if (argc == 2)
	{
		ft_parser(argv[1]);
/******************************************************************************
		// Verification de la validite de la map a parser.
		if (ft_isvalid(argv[1]))
		{
			// Recuperation de la taille de la map a parser.
			ft_filesize(argv[1]);

			// Enregistrement de la map parsee.
			ft_savemap(argv[1]);
		}
******************************************************************************/

		ft_error(ft_werror(argv[1]));
/******************************************************************************

******************************************************************************/

		ft_solver(map);
/******************************************************************************

******************************************************************************/

		ft_solved(tabrst);
/******************************************************************************

******************************************************************************/

	}

	// Il manque des arguments.
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");

	// Il y a trop d'arguments.
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	
	// FIN
	return (0);
}
