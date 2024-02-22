/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:41:37 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/12 20:53:57 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalphadown(char c)
{
    if ('a' <= c && c <= 'z')
        return (1);
    return (0);
}

int ft_isalphaup(char c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    return (0);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    int i;

    i = -1;
    if (argc == 2)
    {
        while (argv[1][++i])
        {
            if (ft_isalphaup(argv[1][i]))
                argv[1][i] += 32;
            else if (ft_isalphadown(argv[1][i]))
                argv[1][i] -= 32;
        }
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
