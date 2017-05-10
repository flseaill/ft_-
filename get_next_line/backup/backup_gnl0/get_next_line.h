/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 20:35:13 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/23 22:36:22 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFF_SIZE
#define BUFF_SIZE 32
#endif

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		get_next_line(const int fd, char **line);

#endif
