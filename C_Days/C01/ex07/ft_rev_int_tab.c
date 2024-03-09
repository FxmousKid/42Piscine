/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:14:59 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/09 13:05:00 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	stock;
	int	i;

	i = 0;
	while (size > i)
	{
		stock = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = stock;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	char s[] = "1111000";
	ft_rev_int_tab(s, 7);
	printf("s = %s", s);
	return (0);
}*/
