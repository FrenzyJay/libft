/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/22 05:14:20 by garm              #+#    #+#             */
/*   Updated: 2013/12/08 16:34:43 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		length;
	int		i;
	char	*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	length = i + 1;
	i = 0;
	if ((dest = (char*)malloc(length)))
	{
		while (i <= length)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}

