/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 20:35:13 by flseaill          #+#    #+#             */
/*   Updated: 2017/05/07 02:11:53 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFF_SIZE 32
#define START_LINE 0;
#define RESET 0;

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_list
{
	char		**content;
	size_t		content_size;
	int		sl;
}				t_list;

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		get_next_line(const int fd, char **line);

#endif
