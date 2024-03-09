/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:54:51 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/20 20:57:15 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define N 4
#define TRUE 1
#define FALSE 0

void	comb_parsevue_and_fill_output(int **output, char *arg, int **input)
{
	parse_vue(arg, input);
	fill_output(output);
}

int	main(int argc, char **argv)
{
	int	**input;
	int	**output;
	int	counter;

	counter = 0;
	input = (int **) malloc(sizeof(int) * 4);
	output = (int **) malloc(sizeof(int) * 4);
	while (counter < 4)
	{
		input[counter] = (int *)malloc(sizeof(int) * 4);
		output[counter] = (int *)malloc(sizeof(int) * 4);
		counter++;
	}
	if (arg_validate(argc, argv) == 0)
	{
		write(2, "Error\n\n", 7);
		return (0);
	}
	comb_parsevue_and_fill_output(output, argv[1], input);
	if (algo(output, input, 0, 0) == TRUE)
		print_grid(output);
	else
		write(2, "Error\n\n", 7);
	return (0);
}
