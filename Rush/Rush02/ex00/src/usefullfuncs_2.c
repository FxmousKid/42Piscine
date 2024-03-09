/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefullfuncs_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:49:20 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:03:04 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	incr ;

	incr = 0;
	while (src[incr] != '\0')
	{
		dest[incr] = src[incr];
		incr++;
	}
	dest[incr] = '\0';
	return (dest);
}
