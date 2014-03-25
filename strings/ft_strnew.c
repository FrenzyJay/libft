/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 14:09:04 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/25 18:17:18 by jibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*strnew;

	strnew = (char *) malloc(size + 1);
	if (!strnew)
		return (NULL);
	ft_bzero((void *) strnew, size + 1);
	return (strnew);
}

