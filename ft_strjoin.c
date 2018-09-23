/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:47:56 by vkorniie          #+#    #+#             */
/*   Updated: 2018/05/11 16:55:32 by vkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (p == NULL)
			return (0);
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			p[i++] = s2[j++];
		p[i] = '\0';
		return (p);
	}
	return (0);
}
