/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:32:46 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 12:15:31 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_doublon(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void    ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        if (!ft_doublon(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }
    j = 0;
    while (s2[j])
    {
        if (!ft_doublon(s1, s2[j], i) && !ft_doublon(s2, s2[j], j))
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}
