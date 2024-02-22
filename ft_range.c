/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:50:06 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 13:36:08 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len;
    int *tab;

    len = (end >= start) ? end - start + 1 : start - end + 1;
    tab = malloc(sizeof(int) * (len));
    if (!tab)
        return (NULL);
    while (len--)
        tab[len] = (end >= start) ? start++ : start--;
    return (tab);
}

int *ft_range(int start, int end)
{
    int len;
    int i;
    int *tab;

    len = end >= start ? end - start + 1 : start - end + 1;
    tab = malloc(sizeof(int) * len);
    if (!tab)
        return (NULL);
    i = 0;
    while (i < len)
        tab[i++] = end >= start ? start++ : start--;
    return (tab);
}

#include <stdio.h>

int main()
{
    int start = 0;
    int end = -4;
    int *res;
    int *rres;

    res = ft_range(start, end);
    rres = ft_rrange(start, end);
    printf("ft_range : %d %d %d %d %d\n", res[0], res[1], res[2], res[3], res[4]);
    printf("ft_rrange : %d %d %d %d %d\n", rres[0], rres[1], rres[2], rres[3], rres[4]);
    free(res);
    free(rres);
    return 0;
}
