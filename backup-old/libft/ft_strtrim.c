/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:38:29 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/30 17:34:10 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*dst;
	int		i;
	int		j;

	if (!s || (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(s) + 2)))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		dst[j] = s[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	j--;
	while (j >= 0 && (dst[j] == ' ' || dst[j] == '\n' || dst[j] == '\t'))
		dst[j--] = '\0';
	return (dst);
}
