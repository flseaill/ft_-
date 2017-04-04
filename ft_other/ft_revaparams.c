/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:34:47 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/04 12:47:15 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc >= 2)
		while (argc != 1)
		{
			printf("%s", argv[argc - 1]);
			if (argc > 1)
				argc--;
		}
	else
		printf("%s", "Not enough params, this program needs one at least.");
	return (0);
}
