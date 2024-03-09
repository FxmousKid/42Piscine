/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:05:16 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/08 16:39:16 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	putchar(char c)
{
	write(1, &c, 1);
}

static void	display_numbers(int n1, int n2)
{
	putchar(n1 / 10 + 48);
	putchar(n1 % 10 + 48);
	putchar(' ');
	putchar(n2 / 10 + 48);
	putchar(n2 % 10 + 48);
	if (n1 < 98)
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			display_numbers(n1, n2);
			n2 = n2 + 1;
		}
		n1++;
		n2 = n1 + 1;
	}
}
