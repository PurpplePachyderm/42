/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:14:20 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/12 15:33:23 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
    if (c == '\t' || c == ' ')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int  i;

        i = 0;
        while(ft_isspace(argv[1][i]))
           i++;
        while(!ft_isspace(argv[1][i]) && argv[1][i] != '\0')
            write(1, &argv[1][i++], 1);
    }
    write(1, "\n", 1);
    return (0);
}