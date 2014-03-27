/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garm <garm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 04:54:56 by garm              #+#    #+#             */
/*   Updated: 2014/01/02 01:52:01 by garm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_findc(const char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		i = -1;
	return (i);
}

