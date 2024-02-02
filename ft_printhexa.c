/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:41:19 by emfourni          #+#    #+#             */
/*   Updated: 2024/02/02 16:21:39 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexlow(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr < ft_strlen(base))
	{
		write(1, &base[nbr], 1);
		count++;
	}
	else
	{
		count += ft_puthexlow(nbr / ft_strlen(base), base);
		count += ft_puthexlow(nbr % ft_strlen(base), base);
	}
	return (count);
}

int	ft_puthexupp(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr < ft_strlen(base))
	{
		write(1, &base[nbr], 1);
		count++;
	}
	else
	{
		count += ft_puthexupp(nbr / ft_strlen(base), base);
		count += ft_puthexupp(nbr % ft_strlen(base), base);
	}
	return (count);
}

int	ft_puthex_p(unsigned long long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr < ft_strlen(base))
	{
		write(1, &base[nbr], 1);
		count++;
	}
	else
	{
		count += ft_puthexlow(nbr / ft_strlen(base), base);
		count += ft_puthexlow(nbr % ft_strlen(base), base);
	}
	return (count);
}

int	ft_putadress(unsigned long long nbr, char *base)
{
	int	count;

	if (nbr == 0)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_puthex_p(nbr, base);
	return (count);
}
