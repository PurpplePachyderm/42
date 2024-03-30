/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:23:02 by emilefourni       #+#    #+#             */
/*   Updated: 2024/03/30 17:06:14 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    list_args(char **argv, t_pile **a)
{
    long i;

    i = 1;
    while (argv[i] != NULL)
    {
        ft_add_back(a, ft_new_node(atoi(argv[i])));
        i++;
    }
    if (ft_checkduplicate((*a)))
        ft_error("Tia un dup frerot\n");
}

t_pile *ft_parse_args(char **argv)
{
    t_pile *a;
    char **temp;

    a = NULL;
    temp = ft_split(argv[1]);
    check_argv(temp, ft_countwords(argv[1]), 0);
    list_args(temp, &a);
    ft_freestr(temp);
    free(temp);
    return (a);
}

t_pile *ft_parse(int argc, char **argv)
{
    t_pile *a;

    a = NULL;
    if (argc < 2)
        ft_error("mets y du tien aussi\n");
    else if (argc == 2)
        a = ft_parse_args(argv);
    else
    {
        check_argv(&argv[1], argc, 0);
        list_args(argv, &a);
    }
    return (a);
}

int main(int argc, char **argv)
{
    t_pile *a;

    a = ft_parse(argc, argv);
    while (a)
    {
        printf("%d\n", a->nb);
        a = a->next;
    }
}
