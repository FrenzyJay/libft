/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:07:27 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/25 18:03:39 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	if ((dest = (char *)malloc(i + 1)) != NULL)
	{
		dest[i] = '\0';
		i--;
		while (i >= 0)
		{
			dest[i] = src[i];
			i--;
		}
		return (dest);
	}
	return (NULL);
}

