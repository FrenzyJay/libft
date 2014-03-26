/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 20:07:35 by garm              #+#    #+#             */
/*   Updated: 2014/03/26 22:50:19 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned long start, unsigned long n)
{
	char	*ret;
	int	i;

	i = 0;
	while (start > 0)
	{
		i++;
		start--;
	}
	if ((ret = (char*)malloc(n + 1)))
	{
		ret = ft_strncpy(ret, s + i, n);
		ret[n] = '\0';
	}
	return (ret);
}

