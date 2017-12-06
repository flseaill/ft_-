/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:34:54 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/07 02:11:50 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		countlines(char *filecontent)
{
	size_t	i;
	size_t	nl;

	i = 0;
	nl = 0;
	while (filecontent[i])
	{
		if (filecontent[i] == '\n')
			nl++;
		i++;
	}
	return (nl);
}

int		get_next_line(const int fd, char **line)
{
	//static struct s_list;

	if (s_list.sl == 0)
		s_list.sl = START_LINE;
	
}
