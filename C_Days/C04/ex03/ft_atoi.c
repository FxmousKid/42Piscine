/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:10:16 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 15:56:50 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	rendue;
	int	sign;

	rendue = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rendue = (*str - '0') + 10 * rendue;
		str++;
	}
	return (rendue * sign);
}
/*
int main(void)
{
	char *s = "\t\r\t-14\t7t48368";
	int x = ft_atoi(s);
	printf("my atoi is = %d\n", x);
	return 0;
}*/
