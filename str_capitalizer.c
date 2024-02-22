/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:49:02 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 13:38:08 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    return (0);
}

int ft_isupper(char c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    return (0);
}

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void    str_capitalizer(char *str)
{
    int i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i])
    {
        if (ft_isupper(str[i]) && ft_isalpha(str[i - 1]))
            str[i] += 32;
        if (ft_isspace(str[i - 1]) && ft_isalpha(str[i]))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc != 1)
        while (i < argc)
            str_capitalizer(argv[i++]);
    else if (argc == 1)
        write(1, "\n", 1);  
    return (0);
}