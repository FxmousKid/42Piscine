/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:58:57 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:04:44 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
int main(void)
{
	printf("2^4 = %d\n", ft_iterative_power(2,4));
	printf("0^0 = %d\n", ft_iterative_power(0,0));
	printf("3^4 = %d\n", ft_iterative_power(3,4));
	return 0;
}*/
