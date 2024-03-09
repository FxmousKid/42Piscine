/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:59:57 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:17:01 by inazaria         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*
int	main(void)
{
	printf("next_prime(2147483646) = %d\n", ft_find_next_prime(2147483646));
	printf("next_prime(0) = %d\n", ft_find_next_prime(0));
	printf("next_prime(1) = %d\n", ft_find_next_prime(1));
	printf("next_prime(-45) = %d\n", ft_find_next_prime(-45));
	return (0);
}*/
