/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:29:38 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/22 15:28:07 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define SUCCESS		1
# define END_OF_FILE	0
# define ERROR			-1
# define CONTINUE_READ	-2

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

typedef struct s_gnl_list
{
	int					fd;
	char				*save;
	struct s_gnl_list	*next;
}				t_gnl_list;

int				get_next_line(int fd, char **line);
t_gnl_list		*create_fd_elem(t_gnl_list **lst, int fd);
void			remove_fd_elem(t_gnl_list **list_head, t_gnl_list *target_elem);

#endif
