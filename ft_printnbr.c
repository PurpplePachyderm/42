/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:21:09 by emfourni          #+#    #+#             */
/*   Updated: 2024/02/02 16:21:39 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(long nb)
{
	char	c;

	c = nb % 10 + 48;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &c, 1);
}

int	ft_putsigned(int nb)
{
	size_t	len;
	int		temp;

	temp = 0;
	len = 1;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	temp = nb;
	while (temp >= 10)
	{
		temp /= 10;
		len++;
	}
	ft_putnbr(nb);
	return (len);
}

int	ft_putunsigned(unsigned	int nb)
{
	unsigned int	temp;
	size_t			len;

	len = 1;
	temp = nb;
	while (temp >= 10)
	{
		temp /= 10;
		len++;
	}
	ft_putnbr(nb);
	return (len);
}
