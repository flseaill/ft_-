/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 04:58:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/04/03 12:30:44 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinsep(const char *s1, const char *s2, char sep)
{
	char	*concat;
	size_t	i;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(concat = (char *)malloc(sizeof(char) * len + 2)))
		return (NULL);
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	concat[i] = sep;
	i++;
	i = 0;
	while (s2[i])
	{
		concat[i + ft_strlen((char *)s1) + 1] = s2[i];
		i++;
	}
	concat[i + ft_strlen((char *)s1) + 1] = '\0';
	return (concat);
}
