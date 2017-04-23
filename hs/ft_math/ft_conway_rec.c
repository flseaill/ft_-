/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conway_rec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 17:56:30 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/16 18:17:37 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_atoi(const char *str);
int		ft_intlen(int n);
char	*ft_itoa(int n);
void	ft_putstr(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strlen(char *str);

unsigned int	ft_conway_rec(int iter, int start)
{
	unsigned char	*nb;
	unsigned char	*next;
	int				recurrence;
	int				i;

	if (iter > 13 || ft_intlen(start) < 46)
		return (0);
	nb = ft_itoa(start);
	//nb = "1";
	while (iter > 0)
	{
		if (!(next = malloc(sizeof(char) * 1024)))
			return ("Erreur malloc");
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
		ft_conway_rec(--iter, nb);
	}
	//return (ft_conway_rec(--iter, nb));
	return (ft_atoi(nb));
}

int		main(char **argv, int argv)
{
	ft_putnbr(ft_conway_rec(argv[1], argv[2]));
	ft_putstr(argv[1]);
	ft_putstr(argv[2]);
}
