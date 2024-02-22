/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:59 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/12 16:26:32 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;

    i = ft_strlen(argv[1]) - 1;
    if (argc == 2)
    {
        while (i >= 0)
            write(1, &argv[1][i--], 1);
    }
    write(1, "\n", 1);
    return (0);
}
