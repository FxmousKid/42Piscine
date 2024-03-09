/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:05:46 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:25:37 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
	printf("fib(-2) = %d\n", ft_fibonacci(-2));
	printf("fib(1) = %d\n", ft_fibonacci(1));
	printf("fib(6) = %d\n", ft_fibonacci(6));
	return 0;
}*/
