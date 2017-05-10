/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:34:54 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/07 00:18:51 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		countlines(char *filecontent)
{
	size_t	i;
	size_t	nl;

	i = 0;
	nl = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			nl++;
		i++;
	}
	return (nl);
}

int		get_next_line(const int fd, char **line)
{
	//Pour avoir une seule variable statique(bonus)
	//static t_list **line;
	int	buffer;
	static int	ligne;
	static int	i;
	static int	j;
	static char c;

	// Set de la valeur du buffer.
	buffer = BUFF_SIZE;

	
	// Nombre de lignes lues auparavant.
	ligne = 0;
	// Compteur de characteres lus.
	i = 0;
	// Compteur de lignes lues.
	j = 0;
	// Verif de la validite du fd + Allocation du stockage de la piece.
	if (fd == -1 || (!(line = malloc(sizeof(char *) * ligne + 1))))
		// Erreur lors de l'execution.
		return (-1);
	// Lecture.
	printf("\n%s\n", "Debut de la lecture");
	while (read(fd, &c, 1) > 0)
	{
		printf("%s\n", "New line");
		//Skip des lignes deja lues.
		while (j < ligne)
		{
			if (line[j][i] == '\n')
			{
				// On passe a la ligne suivante
				//printf("%s", "Nombre de lignes lues : ", "%d\n", j);
				printf("%s%d\n", "Nombre de lignes lues : ", j);
				j++;
			}
			i++;
		}
		// Si fin de ligne :
		if (line[j][i - 1] == '\n')
		{
			line[j][i] = '\0';
			// Affichage de la ligne.
			ft_putstr(line[j]);
			j++;
			ligne = j;
			free(line);
			// La fonction s'est execute correctement.
			return (1);
		}
		// Enregistrement de la piece.
		line[j][i] = c;
		//printf("%s", "Charactere enregistre = ", "%c\n", c, "%s", "Ceci est le ", "%d", i, "%s\n", "e charactere lu");
		printf("%s%c\n%s%d%s\n", "Charactere enregistre = ", c, "Ceci est le ", i, "e charactere lu");
		i++;
		printf("%s\n", line[j]);
	}
	printf("%s\n", "sortie de la lecture");
	//if (i == buffer)
	line[j][i] = '\0';
	ft_putstr(line[j]);
	// free() de pcs.
	free(line);
	// La fonction s'est execute correctement jusqu'a la fin du fichier.
	return (0);
}
