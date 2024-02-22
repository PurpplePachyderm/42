/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:42:57 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 14:47:35 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else 
            i++;
    }
}

int main(void)
{
    int tab[4] = {-1, -4, 0, 3};

    sort_int_tab(tab, 4);
    printf("%d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
    return 0;
}
