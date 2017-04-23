/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:32:53 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/20 18:15:57 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	while (i != max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
