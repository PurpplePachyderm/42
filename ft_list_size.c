/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:58:36 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/20 21:12:47 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    if (!begin_list)
        return (0);
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));

    // Connect nodes
    node1->next = node2;
    node2->next = NULL;

    printf("%d\n", ft_list_size(node1));
    free(node1);
    free(node2);
    return 0;
}
