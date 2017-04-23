/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aparams.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:53:07 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/04 12:56:54 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		argc = 2;
		while (argv[argc - 1])
		{
			printf("%s", argv[argc - 1]);
			argc++;
		}
	}
	else
		printf("%s", "Not enough params, this program needs at least one.");
	return (0);
}
