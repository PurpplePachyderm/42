/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:46:17 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/05 10:57:14 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else 
	{
		while (i <= nb)
		{
			n *= i;
			i++;
		}
		return (n);
	}
}
