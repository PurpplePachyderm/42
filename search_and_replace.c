/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:17 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/12 20:39:06 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}


int ft_strchr(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 4 && ft_strchr(argv[1], argv[2][0]) && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while(argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
            {
                write(1, &argv[3][0], 1);
                i++;
            }
            write(1, &argv[1][i++], 1);
        }
    }
    i = 0;
    if (argc == 4 && !ft_strchr(argv[1], argv[2][0]) && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while(argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
