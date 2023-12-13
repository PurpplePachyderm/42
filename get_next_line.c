/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:21:58 by emilefourni       #+#    #+#             */
/*   Updated: 2023/12/12 13:56:19 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static t_list   *stash = NULL;
    char            *line;
    int             bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
        return (NULL);
    bytes_read = 1;
    line = NULL;
    // read from fd and add to linked list
    read_and_stash(fd, &stash, &bytes_read);
    if (!stash)
        return (NULL);
    // extract from stash to line
    extract_line(stash, &line);
    // clean stash
    clean_stash(&stash);
    if (line[0] == '\0')
    {
        free_stash(stash);
        stash = NULL;
        free(line);
        return (NULL);
    }
    return (line);
}

void    read_and_stash(int fd, t_list **stash, int *bytes_read)
{
    char    *buff;

    while (!found_new_line(*stash) && *bytes_read != 0)
    {
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (!buff)
            return;
        *bytes_read = (int)read(fd, buff, BUFFER_SIZE);
        if ((*stash == NULL && bytes_read == 0) || *bytes_read == -1)
        {
            free(buff);
            return;
        }
        buff[*bytes_read] = '\0';
        add_to_stash(stash, buff, *bytes_read);
        free(buff);
    }
}

void    add_to_stash(t_list **stash, char *buff, int bytes_read)
{
    int i;
    t_list *last;
    t_list *new_node;

    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return;
    new_node->next = NULL;
    new_node->content = malloc(sizeof(char) * (bytes_read + 1));
    if (new_node->content == NULL)
        return;
    i = 0;
    while (buff[i] && i < bytes_read)
    {
        new_node->content[i] = buff[i];
        i++;
    }
    new_node->content[i] = '\0';
    if (!*stash)
    {
        *stash = new_node;
        return;
    }
    last = ft_lst_get_last(*stash);
    last->next = new_node;
}

void    extract_line(t_list *stash, char **line)
{
    int i;
    int j;

    if (!stash)
        return;
    generate_line(stash, line);
    if (!*line)
        return;
    j = 0;
    while (stash)
    {
        i = 0;
        while (stash->content[i])
        {
            if (stash->content[i] == '\n')
            {
                (*line)[j++] = stash->content[i];
                break;
            }
            (*line)[j++] = stash->content[i++];
        }
        stash = stash->next;
    }
    (*line)[j] ='\0';
}

void    clean_stash(t_list **stash)
{
    t_list *last;
    t_list *clean_node;
    int     i;
    int     j;

    clean_node = malloc(sizeof(t_list));
    if (stash == NULL || clean_node == NULL)
        return;
    clean_node->next = NULL;
    last = ft_lst_get_last(*stash);
    i = 0;
    while (last->content[i] && last->content[i] != '\n')
        i++;
    if (last->content && last->content[i] == '\n')
        i++;
    clean_node->content = malloc(sizeof(char) * ((ft_strlen(last->content) - i) + 1));
    if (!clean_node->content)
        return;
    j = 0;
    while (last->content[i])
        clean_node->content[j++] = last->content[i++];
    clean_node->content[j] = '\0';
    free_stash(*stash);
    *stash = clean_node;
}
