/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:21:44 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/24 03:11:36 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	kount;

	if (s1 && s2)
	{
		kount = 0;
		while ((s1[kount] != '\0' || s2[kount] != '\0') && kount <= n)
		{
			if (s1[kount] != s2[kount])
				return (s1[kount] - s2[kount]);
			kount++;
		}
	}
	return (0);
}

