/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:20:12 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 13:12:35 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	if (*s == (char)c)
		res = (char *)s;
	while (*s++)
	{
		if (*s == (char)c)
			res = (char *)s;
	}
	return (res);
}
