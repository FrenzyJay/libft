/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:40:08 by garm              #+#    #+#             */
/*   Updated: 2014/03/25 18:32:20 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		if (i > len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}

