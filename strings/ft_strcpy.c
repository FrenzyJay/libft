/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:39:30 by garm              #+#    #+#             */
/*   Updated: 2014/03/17 23:50:58 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	int		i;
	char	*ret;

	ret = s1;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s2[i] != '\0')
	{
		ret[i] = s2[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

