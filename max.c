/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:47:53 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/14 13:08:44 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    unsigned int i;
    unsigned int max;

    i = 0;
    max = tab[i];
    if (len == 0)
        return (0);
    while(i < len)
    {
        if (max < (unsigned int) tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tab[0];
    int len = 0;
    printf("%d\n", max(tab, len));
    return 0;
}
