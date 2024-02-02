/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:26 by emfourni          #+#    #+#             */
/*   Updated: 2023/11/20 13:19:34 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
		while (n-- > 0)
			*d++ = *s++;
	if (d > s)
	{
		d += n;
		s += n;
		while (n-- > 0)
			*(--d) = *(--s);
	}
	return (dest);
}
