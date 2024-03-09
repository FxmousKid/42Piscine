/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:50:30 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:18:08 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
	printf("2^4 = %d\n", ft_recursive_power(2, 4));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("3^4 = %d\n", ft_recursive_power(3, 4));
	return 0;
}*/
