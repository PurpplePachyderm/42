/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:40:01 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 10:48:30 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int num_size(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
        i = 1;
    while (nb != 0)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

char    *ft_putnbr(char *itoa, unsigned int nb, int len)
{
    while (nb > 0)
    {
        itoa[len--] = nb % 10 + 48;
        nb /= 10;
    }
    return (itoa);
}

char *ft_itoa(int nbr)
{
    int len;
    unsigned int nb;
    char *itoa;

    len = num_size(nbr);
    if (!(itoa = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    itoa[len--] = '\0';
    if (nbr == 0)
        itoa[0] = '0';
    if (nbr < 0)
    {
        nb = nbr * -1;
        itoa[0] = '-';
    }
    else 
        nb = nbr;
    itoa = ft_putnbr(itoa, nb, len);
    return (itoa);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return argc;
}
