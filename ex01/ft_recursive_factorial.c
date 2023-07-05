/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:59:47 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/05 11:10:22 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		n = nb * ft_recursive_factorial(nb - 1);
	return (n);
}
