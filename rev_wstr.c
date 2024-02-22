/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:59:17 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 11:39:22 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t');
}

void    rev_wstr(char *str)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (str[i])
    {
        i++;
        words++;
    }
    i--;
    words--;
    while (i > 0)
    {
        while (!ft_isspace(str[i]) && str[i])
        {
            i--;
            words--;
        }
        words++;
        while (!ft_isspace(str[words]) && str[words])
            write(1, &str[words++], 1);
        while (ft_isspace(str[i]) && str[i])
        {
            i--;
            write(1, " ", 1);
        }
        words = i;
    }

}

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1][0])
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return 0;
}
