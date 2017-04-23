/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 21:43:01 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/03 12:23:48 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
