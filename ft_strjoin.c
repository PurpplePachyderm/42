/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:09:18 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 13:05:56 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		a;
	char		*r;
	int			i;
	int			j;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1) + ft_strlen(s2);
	r = ft_calloc(sizeof(char), (a + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		r[i + j] = s2[j];
		j++;
	}
	r[i + j] = '\0';
	return (r);
}
