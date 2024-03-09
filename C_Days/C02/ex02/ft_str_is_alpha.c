/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:21:10 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/10 20:19:08 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		is_alpha;
	int		counter;
	char	car;

	is_alpha = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		car = str[counter];
		if ((car < 65 || car > 90) && (car < 97 || car > 122))
			is_alpha = 0;
	counter++;
	}
	return (is_alpha);
}
