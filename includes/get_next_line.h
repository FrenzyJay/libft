/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/18 01:11:36 by garm              #+#    #+#             */
/*   Updated: 2014/03/18 06:31:23 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUF		1024
# define CLEAN		-1
# define THIS_CRAP	NULL

# define COUNTC		ft_strcountc

typedef struct	s_gnl
{
	int				fd;
	char			*memory;
	struct s_gnl	*next;
}				t_gnl;

int		get_next_line(int const fd, char **line);

#endif /* !GET_NEXT_LINE_H */

