/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:35:12 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/21 18:45:19 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int ft_countwords(char *str)
{
    int i;
    int wordcount;

    i = 0;
    wordcount = 0;
    while (str[i])
    {
        if ((!ft_isspace(str[i]) && ft_isspace(str[i - 1])) || (!ft_isspace(str[i]) && i == 0))
            wordcount++;
        i++;
    }
    return (wordcount);
}

char *ft_worddup(char *str)
{
    int i;
    char *dest;

    i = 0;
    while (str[i] && !ft_isspace(str[i]))
        i++;
    if (!(dest = malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (str[i] && !ft_isspace(str[i]))
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char **ft_split(char *str)
{
    int i;
    int words;
    char **split;

    i = 0;
    words = ft_countwords(str);
    if (!(split = malloc(sizeof(char *) * (words + 1))))
        return (NULL);
    while (*str)
    {
        while (*str && ft_isspace(*str))
            str++;
        if (*str && !ft_isspace(*str))
        {
            split[i] = ft_worddup(str);
            i++;
            while (*str && !ft_isspace(*str))
                str++;
        }
    }
    split[i] = NULL;
    return (split);
}

#include <stdio.h>

int		main()
{
    char **arr;

    char *phrase = "hello   world    caca     emile    MMMARRCCCC";
    arr = ft_split(phrase);
    printf("%s\n", arr[0]);
    printf("%s\n", arr[1]);
    printf("%s\n", arr[2]);
    printf("%s\n", arr[3]);
    printf("%s\n", arr[4]);
    printf("%s\n", arr[5]);
}
