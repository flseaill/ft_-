/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 18:42:29 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/21 19:06:36 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>

int		ft_display_key(int keycode, void *mlx)
{
	printf("key event %d\n", keycode);
	return (0);
}

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
	int		*winsize;

	name = fdf;
	winsize[0] = 720;
	winsize[1] = 360;
	winsize[2] = 0;
	x = 720;
	y = 360;
	color = 0x00FFFFFF;
	mlx = mlx_init();
	win = mlx_new_window(mlx, win, winsize[0], winsize[1], name);
	if (!mlx || !win)
		return (0);
	else
		ft_draw_square(mlx, win, x, y, color);
	mlx_key_hook(win, my_key_funct);
	mlx_loop(mlx);
}
