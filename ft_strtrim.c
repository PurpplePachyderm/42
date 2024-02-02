/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:10:05 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 13:03:42 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (start < ft_strlen(s1))
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

static size_t	ft_getend(char const *s1, char const *set, size_t start)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i >= start)
	{
		if (!ft_strchr(set, s1[i - 1]))
			break ;
		i--;
	}
	return (i);
}

char	*ft_szero(void)
{
	char	*trim;

	trim = (char *)malloc(sizeof(char));
	trim[0] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set, start);
	if (s1[0] == '\0' || start > end)
		return (ft_szero());
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trim == NULL)
		return (trim);
	i = 0;
	while (i < end - start)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
