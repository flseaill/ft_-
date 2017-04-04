/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 16:03:41 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/13 16:33:20 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (result > 1)
	{
		result--;
		nb = nb * result;
	}
	return (nb);
}
