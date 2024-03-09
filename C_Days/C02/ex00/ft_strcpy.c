/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:57:49 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/10 15:50:51 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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
