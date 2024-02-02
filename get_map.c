/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:15:34 by emfourni          #+#    #+#             */
/*   Updated: 2024/02/02 16:11:04 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// char *get_map(int fd)
// {
// 	char *line_map;
// 	char *buff;
// 	int		char_count;
// 	char *tmp_buff;

// 	line_map = ft_strdup("");
// 	buff = ft_strdup("");
// 	char_count = get_next_line(fd, &line_map);
// 	if (char_count > 0)
// 	{
// 		tmp_buff = buff;
// 		while (char_count > 0)
// 		{
// 			buff = ft_strjoin(buff, line_map);
// 			free(tmp_buff);
// 			free(line_map);
// 			line_map = ft_strdup("");
// 			char_count = get_next_line(fd, &line);
// 			tmp_buff = buff;
// 		}
// 		return (buff);
// 	}
// 	ft_printf("Error ! Mauvaise lecture de map zebi\n");
// 	return (NULL);
// }

