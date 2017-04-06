/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:04:13 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/06 16:23:21 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_isvalid(char *str);

/***************************************
 * Gestion des cas d'erreur            *
 ***************************************/

int		ft_filesize(char *str);

/***************************************
 * Recuperation de la taille du buffer *
 ***************************************/

int		ft_readfile(char *str);

/***************************************
 * Lecture (et enregistrement?)        *
 ***************************************/

int		ft_npieces(char *str);

/***************************************
 * Recuperation du nombre de pieces    *
 ***************************************/


char	**ft_tabpiece(char *str);

/***************************************
 * Recuperation des pieces             *
 ***************************************/

char	**ft_solver(char **pieces);

/***************************************
 * Algorythme de resolution            *
 ***************************************/


void	ft_error(int err);

/***************************************
 * Affiche erreur et exit()            *
 ***************************************/

void	ft_solved(char **tabrst);

/**************************************
 * Affiche la resolution du programme *
 **************************************/




