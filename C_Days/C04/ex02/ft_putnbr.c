/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:03:21 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/15 14:54:17 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putnbr_long(long nb)
{
	int	digit_d;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb > 9)
		ft_putnbr_long(nb / 10);
	digit_d = 48 + (nb % 10);
	write(1, &digit_d, 1);
}

void	ft_putnbr(int n)
{
	ft_putnbr_long(n);
}
/*
int main(void)
{
	int x= 2147483648;
	printf("fake in t min=%d, long= %u", x,x);
}*/
