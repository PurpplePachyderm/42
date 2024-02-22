/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:41:38 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 14:41:19 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

int	ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    if (begin_list == 0)
        return (0);
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

