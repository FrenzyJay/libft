/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 20:07:35 by garm              #+#    #+#             */
/*   Updated: 2014/03/27 03:08:25 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned long start, unsigned long n)
{
	char	*ret;

	if (n < 0 || start < 0)
		return (NULL);
	if ((ret = (char*)malloc(n + 1)))
	{
		ret = ft_strncpy(ret, s + start, n);
		ret[n] = '\0';
	}
	return (ret);
}

