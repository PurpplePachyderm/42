/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:57:45 by emfourni          #+#    #+#             */
/*   Updated: 2023/12/15 16:24:26 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;

}		t_list;

char	*get_next_line(int fd);
void	read_and_stash(int fd, t_list **stash, int *bytes_read);
void	add_to_stash(t_list **stash, char *buff, int bytes_read);
void	extract_line(t_list *stash, char **line);
void	clean_stash(t_list **stash);
int		found_new_line(t_list *stash);
t_list	*ft_lst_get_last(t_list *stash);
void	generate_line(t_list *stash, char **line);
void	free_stash(t_list *stash);
size_t	ft_strlen(const char *str);

#endif
