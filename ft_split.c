/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:03:57 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 17:32:07 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *str, char c)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] && str[index] == c)
			index++;
		if (str[index] && str[index] != c)
		{
			count++;
			while (str[index] && str[index] != c)
				index++;
		}
	}
	return (count);
}

static	char	*ft_worddup(const char *str, char c)
{
	size_t	index;
	char	*dst;

	index = 0;
	while (str[index] && str[index] != c)
		index++;
	dst = malloc(sizeof(char) * (index + 1));
	if (!dst)
		return (NULL);
	index = 0;
	while (str[index] && str[index] != c)
	{
		dst[index] = str[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

void	ft_free(char **str, int i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;

	i = 0;
	if (!s)
		return (0);
	split = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			split[i] = ft_worddup(s, c);
			if (!split[i])
				return (ft_free(split, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	split[i] = NULL;
	return (split);
}
