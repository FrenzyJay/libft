/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:07:27 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/17 16:58:42 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	length = i + 1;
	i = 0;
	if ((dest = (char *)malloc(length)) != NULL)
	{
		dest[length] = '\0';
		while (i < length)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}

