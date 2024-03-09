/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:25:36 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/08 15:49:09 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

static void	ft_putnbr_long(long nb)
{
	int digit_d;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb > 9)
		ft_putnbr_long(nb / 10);
	digit_d = 48 + (nb % 10);
	write(1, &digit, 1);
}

void	ft_putnbr(int n)
{
	ft_putnbr_long(n);
}
