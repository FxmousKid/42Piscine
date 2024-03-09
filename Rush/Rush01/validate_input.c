/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:30:07 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/20 12:26:19 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	vue_len(char *str)
{
	int	counter;
	int	count;

	counter = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[counter])
	{
		if (str[counter] == ' ')
			count++;
		counter++;
	}
	count++;
	return (count);
}

int	arg_validate(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc != 2)
		return (0);
	while (argv[1][counter - 1] && (argv[1][counter] == ' '
		|| (argv[1][counter] < '5' && argv[1][counter] > '0')))
	{
		if ((argv[1][counter - 1] > '4' || argv[1][counter - 1] < '1')
			&& counter -1 % 2 == 0)
		{
			return (0);
		}
		if (argv[1][counter - 1] == argv[1][counter])
			return (0);
		counter++;
	}
	if (vue_len(argv[1]) != 16 || argv[1][counter])
		return (0);
	return (1);
}

int	**parse_vue(char *str, int **input)
{
	int	idx;
	int	counter1;
	int	counter2;

	idx = 0;
	counter1 = 0;
	counter2 = 0;
	while (counter1 < 4)
	{
		while (counter2 < 4)
		{
			if (str[idx] >= '0' && str[idx] <= '4')
			{
				input[counter1][counter2] = str[idx] - 48;
				counter2++;
			}
			idx++;
		}
		counter1++;
		counter2 = 0;
	}
	return (input);
}
