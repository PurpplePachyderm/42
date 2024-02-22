/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:23:45 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/21 17:30:49 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t');
}
void    rostring(char *str)
{
    int i;
    int start;
    int end;

    i = 0;
    while (ft_isspace(str[i]))
        i++;
    start = i;
    while (str[i] && !ft_isspace(str[i]))
        i++;
    end = i - 1;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i])
    {
        if (str[i] && !ft_isspace(str[i]))
        {
            while (str[i] && !ft_isspace(str[i]))
            {
                write(1, &str[i], 1);
                i++;
            }
            if (str[i])
                write(1, " ", 1);
        }
        else 
            i++;
    }
    if (start <= end)
    {
        write(1, " ", 1);
        while (start <= end)
            write(1, &str[start++], 1);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1][0])
        rostring(argv[1]);
    write(1, "\n", 1);
    return 0;
}
