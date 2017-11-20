/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:38:15 by flseaill          #+#    #+#             */
/*   Updated: 2017/11/20 17:23:08 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/* stdlib pour exit(), et stdio pour puts() */

#include <dirent.h> 
/* Pour l'utilisation des dossiers */

int main(int argc, char **argv)
{
	DIR* rep = NULL;
	rep = opendir(argv[1]); /* Ouverture d'un dossier */
	if (rep == NULL) /* Si le dossier n'a pas pu être ouvert */
		exit(1); /* (mauvais chemin par exemple) */
	ft_putstr("Le dossier a ete ouvert avec succes");
	if (closedir(rep) == -1) /* S'il y a eu un souci avec la fermeture */
		exit(-1);
	ft_putstr("Le dossier a ete ferme avec succes");

	return 0;
}

