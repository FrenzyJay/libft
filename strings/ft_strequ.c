/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 13:21:58 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/27 13:39:37 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *str1, const char *str2)
{
	if (str1 && str2)
	{
		if (ft_strlen(str1) == ft_strlen(str2))
		{
			if (!ft_strncmp(str1, str2, ft_strlen(str1)))
				return (0);
		}
	}
	return (1);
}

