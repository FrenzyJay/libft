/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 20:07:35 by garm              #+#    #+#             */
/*   Updated: 2014/03/18 06:25:07 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned long start, unsigned long n)
{
	char	*ret;

	while (start > 0)
	{
		s++;
		start--;
	}
	if ((ret = (char*)malloc(n + 1)))
	{
		ret = ft_strncpy(ret, s, n);
		ret[n] = '\0';
	}
	return (ret);
}

