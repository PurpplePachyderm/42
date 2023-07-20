/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:26:03 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/20 14:18:33 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 r[len] = (end >= start) ? start++ : start--;
	return (r);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*range;

	range = ft_rrange(atoi(argv[1]), atoi(argv[2]));
	printf ("%i %i %i %i\n", tab[0], tab[1], tab[2], tab[3]);
	return (argc);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int 	*tab;
	int	len;

	if (start >= end)
	{
		len = start - end + 1;
		flag = 1;
	}
	else if (end > start)
	{
		len = end - start + 1;
		flag = -1;
	}
	i = 0;
	tab = (int *)malloc(sizeof(int) *)
	if (!tab)
		return (NULL);
}
