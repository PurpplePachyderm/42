/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:28:17 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 13:30:44 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		size_src;

	i = -1;
	size_src = 0;
	while (src[size_src])
		size_src++;
	if (size == 0)
		return (size_src);
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (size_src);
}
