/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:55:50 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:17:36 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (x <= nb / x)
	{
		x++;
		if (nb % x == 0)
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	printf("ft_is_prime(2147483647) = %d\n", ft_is_prime(2147483647));
	printf("ft_is_prime(-12) = %d\n", ft_is_prime(-12));
	printf("ft_is_prime(0) = %d\n", ft_is_prime(0));
	printf("ft_is_prime(1) = %d\n", ft_is_prime(1));
	printf("ft_is_prime(3) = %d\n", ft_is_prime(3));	
	printf("ft_is_prime(2) = %d\n", ft_is_prime(2));
	printf("ft_is_prime(5) = %d\n", ft_is_prime(5));
	printf("ft_is_prime(6) = %d\n", ft_is_prime(6));
	printf("ft_is_prime(156) = %d\n", ft_is_prime(156));

	return (0);
}*/
