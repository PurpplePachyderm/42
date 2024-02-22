/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:47:25 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/21 19:15:11 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    else 
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
        }
        if (nb > 9)
            ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int main(void)
{
    ft_putnbr(-2);
    return 0;
}
