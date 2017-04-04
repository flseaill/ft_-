/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:34:47 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/04 12:38:26 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", argv[1]);
	else
	{
		printf("%s", "Too many params, this fonction works with only one.");
	}
}
