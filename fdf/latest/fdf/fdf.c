/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 18:42:29 by flseaill          #+#    #+#             */
/*   Updated: 2017/07/18 17:56:21 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

// Affiche le keycode sur lequel on appuie
int		my_key_funct(int keycode, void *param)
{
	printf("key event = %d\n", keycode);
	// ft_putstr("key event = ");
	// ft_putnbr(keycode);
	// ft_putchar('\n');
	return (0);
}

int		draw_line(void *mlx, void *win, int *x, int *y, int color)
{
	int dx;
	int dy;
	int e;
	e = x[1] - x[0];
	dx = e * 2;
	dy = (y[1] - y[0]) * 2;
	while (x[0] <= x[1])
	{
		mlx_pixel_put(mlx, win, x[0], y[0], color);
		x[0] = x[0] + 1;
		if ((e - dy) <= 0)
		{
			y[0] = y[0] + 1 ;
			e = e + dx ;
		}
	}
	return (1);
}

// Dessine un carre a la position et avec la couleur donne
int		draw_square(void *mlx, void *win, int x, int y, int color)
{
	y = 50;
	while (y < 250)
	{
		x = 50;
		while (x < 400)
		{
			mlx_pixel_put(mlx, win, x, y, color);
			x++;
		}
		y++;
	}
	return (1);
}

int		main(void)
{
	char	*name;
	void	*mlx;
	void	*win;
//	int		*x;
//	int		*y;
	int		color;
	int		width;
	int		height;

	// Nom de la fenetre
	name = "fdf";
	// Largeur
	width = WIDTH_720p;
	// Hauteur
	height = HEIGHT_720p;
	//x = 1440;
	//y = 720;
	color = ORANGE;
	// Init de mlx
	mlx = mlx_init();
	// Init de la fenetre
	win = mlx_new_window(mlx, width, height, name);
	// Verif des inits
	if (!mlx || !win)
		return (0);
	else
		//draw_line(mlx, win, x, y, color);
		draw_square(mlx, win, 0, 100, BLUE);
	//draw_square(mlx, win, 50, 60, PURPLE);
	// Recuperation de la touche enfonce
	//mlx_key_hook(win, my_key_funct, 0);
	// Pour que le programme ne se ferme pas
	mlx_loop(mlx);
}
