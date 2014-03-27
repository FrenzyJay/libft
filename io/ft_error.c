/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:27:30 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/27 17:00:21 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_error(const char *msg, const char *bin)
{
	int	i;

	i = ft_strlen(msg);
	write(2, msg, i);
	write(2, " : ", 3);
	i = ft_strlen(bin);
	write(2, bin, i);
	write(2, "\n", 1);	
	return (1);
}
