/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:50:04 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 13:58:38 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (ft_isupper(argv[1][i]))
                argv[1][i] = 'Z' - argv[1][i] + 'A';
            else if (ft_islower(argv[1][i]))
                argv[1][i] = 'z' - argv[1][i] + 'a';
            
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
