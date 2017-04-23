/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conway_suite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 22:35:07 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/16 18:44:28 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_conway_suite(int iter, int start)
{
	unsigned char	*nb;
	unsigned char	*next;
	int				recurrence;
	int				i;

	if (iter > 13 || ft_intlen(start) < 46)
		return (0);
	//nb = ft_itoa(start);
	nb = "1";
	while (iter > 0)
	{
		if (!(next = malloc(sizeof(char) * 1024)))
			return (NULL);
		while (*nb)
		{
			if (*nb == *nb + 1)
				recurrence++;
			else
			{
				if (recurrence > 0)
					next[i++] = ft_itoa(recurrence);
				else
					next[i++] = '1';
				next[i++] = *nb;
				recurrence = 0;
			}
			nb++;
		}
		i = 0;
		nb = ft_strcpy(next);
		free(next);
		iter--;
	}
}
