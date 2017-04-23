/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validpiece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:40:25 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/06 18:32:09 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_tetri
{
	char	block;
	char	empty;
	char	*
	
}				t_tetri;

int		ft_checkmap(char **map)
{
	int			i;
	int			j;
	int			k;
	const char	char1 = '#';
	const char	char2 = '.';;

	char1 = '#';
	char2 = '.';
	i = 0;
	j = 0;
	k = 0;
	while (map[i])
	{
		while(map[i][j])
		{
			// Si le charactere ne correspond pas
			if (char1 != map[i][j] && char2 != map[i][j])
				ft_error();
			
			// Si le charactere fait partie du tetraminos
			if (map[i][j] == char1)
				//
				if (map[--i][j] != char1 || map[i][--j] != char1 ||
					map[i++][j] != char1 || map[i][++j] != char1)
					ft_error();
				else
					k++;
			//	Si il y a plus de 4 charactere par lignes ou par pieces
			if (j > 4 || k > 4)
				ft_error();
			j++;
		}
		j = 0;
		k = 0;
		// Si il y a un retour a la ligne entre pieces
		i += 1;
		if (i % 5)
		{
			// Si ce n'est pas un retour a la ligne et que c'est le dernier charactere
			if (map[i][j] != '\n' && map[++i][j])
				ft_error();
		}
		i++;
	}
}
