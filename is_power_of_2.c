/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:16:05 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 12:49:18 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int is_power_of_2(int n)
{
    while (n > 0)
    {
        n /= 2;
    }
    if (n == 0)
        return (1);
    else 
        return (0);
}*/

int is_power_of_2(int nb)
{
    if (nb == 0)
        return (0);
    while (nb % 2 == 0)
        nb /= 2;
    return (nb == 1 ? 1 : 0);
}

int main(int argc, char const *argv[])
{
    printf("%d\n", is_power_of_2(atoi(argv[1])));
    return argc;
}
