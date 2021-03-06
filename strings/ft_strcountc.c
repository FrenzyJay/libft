/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 23:46:46 by garm              #+#    #+#             */
/*   Updated: 2014/03/18 06:26:00 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcountc(char const *str, char c)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			ret++;
		i++;
	}
	return (ret);
}

