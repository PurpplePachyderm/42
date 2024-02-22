/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:18:28 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/14 12:45:06 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc == 3)
    {
        while (argv[2][j])
            if (argv[2][j++] == argv[1][i])
                i++;
        if (!argv[1][i])
            ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
