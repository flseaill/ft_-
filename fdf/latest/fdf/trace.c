/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 20:47:40 by flseaill          #+#    #+#             */
/*   Updated: 2017/06/27 20:53:02 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		draw_line(void *mlx, void *win, int *x, int *y, int color)
{
	int dx;
	int dy;
	int e;					// valeur d’erreur
	e = x[1] - x[0];			// -e(0,1)
	dx = e * 2;				// -e(0,1)
	dy = (y[1] - y[0]) * 2;		// e(1,0)
	while (x[0] <= x[1])
	{
		mlx_pixel_put(mlx, win, x[0], y[0], color);
		x[0] = x[0] + 1 ;		// colonne du pixel suivant
		if ((e - dy) <= 0)	// erreur pour le pixel suivant de même rangée
		{
			y[0] = y[0] + 1 ;	// choisir plutôt le pixel suivant dans la rangée supérieure
			e = e + dx ;	// ajuste l’erreur commise dans cette nouvelle rangée
		}
	}
	return (1);
}

int		draw_square(void *mlx, void *win, int x, int y, int color)
{
	y = 50;
	while (y < 150)
	{
		x = 50;
		while (x < 150)
		{
			mlx_pixel_put(mlx, win, x, y, color);
			x++;
		}
		y++;
	}
	return (1);
}
