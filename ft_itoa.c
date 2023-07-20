/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:20:09 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/20 12:09:59 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long 	n;
	int	len;
	char	*res;
	int	i;

	n = nbr;
	len = ft_count(nbr);
	i = len - 1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (n == 0)
		res[i] = '0';
	else if (nbr == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	else if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		res[i] = n % 10 + 48;
		i--;
		n /= 10;
	}
	res[len] = '\0';
	return (res);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}
