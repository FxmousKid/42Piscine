/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:33:45 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/23 08:33:46 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	counter = -1;
	while (++counter < (max - min))
		tab[counter] = min + counter;
	*range = tab;
	return (counter);
}
/*
int	main(void)
{
	int	max = 3;
	int	min = 1;
	int **tab = malloc(sizeof(int) * (max - min));
	ft_ulimate_range(tab, min, max);
}*/
