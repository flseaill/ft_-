/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validpiece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:40:25 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/06 16:55:28 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkmap(char **map)
{
	int		i;
	int		j;
	char	char1;
	char	char2;

	char1 = 0;
	char2 = 0;
	i = 0;
	j = 0;
	while (map[i])
	{
		while(map[i][j])
		{
			if (char1 == 0)
				char1 = map[i][j];
			if (char1 != 0 && char1 != map[i][j] && char2 == 0)
				char2 = map[i][j];
			if (char1 != 0 && char2 != 0 
			&& char1 != map[i][j] && char2 != map[i][j])
				ft_error();
			if (j < 4)
				ft_error();
			j++;
		}
		j = 0;
		if (i % 5)
		{
			if (!(map[i][j]) == '\n')
			{
				ft_error();
			}
		}
		i++;
	}
}
