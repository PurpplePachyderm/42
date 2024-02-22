/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:49:58 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 15:00:53 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i;
    int number;

    number = atoi(argv[1]);
    i = 1;
    if (argc == 2)
    {
    if (number == 1)
        printf("1");
    while (number >= i++)
    {
        if (number % i == 0)
        {
            printf("%d", i);
            if (number == i)
                break;
            number /= i;
            printf("*");
            i = 1;
        }
    }
    }
    printf("\n");
    return (0);
}