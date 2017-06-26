/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 18:42:29 by flseaill          #+#    #+#             */
/*   Updated: 2017/06/26 21:13:39 by flseaill         ###   ########.fr       */
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

// Dessine un carre de la taille et la couleur donne
int		ft_draw_square(void *mlx, void *win, int x, int y, int color)
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

int		main(void)
{
	char	*name;
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		color;
	int		width;
	int		height;

	// Nom de la fenetre
	name = "fdf";
	// Largeur
	width = 2560;
	// Hauteur
	height = 1440;
	x = 1440;
	y = 720;
	color = ORANGE;
	// Init de mlx
	mlx = mlx_init();
	// Init de la fenetre
	win = mlx_new_window(mlx, width, height, name);
	// Verif des inits
	if (!mlx || !win)
		return (0);
	else
		// x et y non pris en compte, pourquoi?
		ft_draw_square(mlx, win, x, y, color);
	// Se dessine par dessus le premier carre, pourquoi?
	// ft_draw_square(mlx, win, 2000, 800, 0x00ABACFC);
	// Recuperation de la touche enfonce
	mlx_key_hook(win, my_key_funct, 0);
	// Pour que le programme ne se ferme pas
	mlx_loop(mlx);
}
