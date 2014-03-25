/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:13:36 by garm              #+#    #+#             */
/*   Updated: 2014/03/17 23:48:04 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(unsigned long size)
{
	void	*zone;

	zone = malloc(size);
	if (zone != NULL)
	{
		ft_bzero(zone, size);
		return (zone);
	}
	return (NULL);
}

