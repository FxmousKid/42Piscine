/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:56:27 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/12 19:19:42 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] > 64 && str[counter] < 91)
		{
			str[counter] += 32;
		}
	counter++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "HELLO";
	ft_strlowcase(str);
	printf("str = %c%c%c%c%c", str[0], str[1], str[2], str[3], str[4]);
	return 0;
}*/
