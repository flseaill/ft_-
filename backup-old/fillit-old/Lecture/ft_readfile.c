/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:52:16 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/14 21:53:51 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_filesize(char *str);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_readfile(char *str)
{
	int		fd;
	int		i;
	char	c;
	char	*pcs;

	i = 0;
	// Ouverture du Fichier.
	fd = open(str, O_RDONLY);

	// Verif de la validite du fd + Allocation du stockage de la piece.
	if (fd == -1 || (!(pcs = malloc(sizeof(char) * 22))))
		// Erreur lors de l'execution de la fonction.
		return (0);

	// Enregistrement pour lst chainee
	while (read(fd, &c, 1) > 0)
	{
		if (i == 21)
		{
			pcs[i] = '\0';
			//ft_savepcs(pcs);
			//ft_putchar('\n');
			ft_putstr("piece suivante\n");
			ft_putstr(pcs);
			//ft_putchar('\n');
			
			// Reset.
			i = 0;
		}
		// Enregistrement de la piece dans pcs.
		pcs[i] = c;
		i++;
	}
	pcs[i] = '\0';
	ft_putstr("piece suivante\n");
	ft_putstr(pcs);
	// Enregistrement des pieces unes a unes dans **tabpcs.
	/*
	 *
	 *
	 while (read(fd, &c, 1) > 0)
	 {
	 if (i == 20)
	 {
	 tabpcs[j][i] = '\0';
	 j++;
	 i = 0;
	 }
	 tabpcs[j][i] = c;
	 i++;
	 }
	 *
	 *
	 */

	// Creation de la liste chainee.
	/*
	 *
	 *
	 lst = ft_lstnew(pcs, 21);
	 while (read(fd, &c, 1) > 0)
	 {
	 if (i == 20)
	 {
	 ft_lstadd(lst, *new);
	 i = 0;
	 }
	 pcs[i] = c;
	 i++;
	 }
	 *
	 *
	 */

	// Test verif.
	//ft_putstr(pcs);

	// Deplacement de la variable dans une liste cree a son intention.
	//ft_lstadd(lst, *new);

	// Fermeture du fichier. + free de pcs.
	close(fd);
	free(pcs);

	// La fonction s'est bien execute.
	return (1);
}

int		main(int argc, char *argv[])
{
	// Il manque des arguments.
	if (argc > 2)
		ft_putstr("Too many arguments.\n");

	// Il y a trop d'arguments.
	else if (argc < 2)
		ft_putstr("File name missing.\n");

	// Si le nombre de parametres est valide.
	else if (argc == 2)
	{
		ft_readfile(argv[1]);
	}
	// FIN
	return (0);
}
