/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:54:38 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/18 21:28:37 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "func.h"

void	print_grid(int **tab)
{
	int	counter1;
	int	counter2;
	int	holder;

	counter1 = 0;
	counter2 = 0;
	while (counter1 < 4)
	{
		while (counter2 < 4)
		{
			holder = tab[counter1][counter2] + 48;
			write(1, &holder, 1);
			write(1, "  ", 2);
			counter2++;
		}
		counter1++;
		write(1, "\n", 1);
		counter2 = 0;
	}
}
/*

void	put_str_error(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write(2, &str[counter], 1);
		counter++;
	}
}

void	error_newline(void)
	*/
