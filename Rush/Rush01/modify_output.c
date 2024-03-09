/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 01:29:46 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/18 22:01:00 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define N 4

int	**fill_output(int **output)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (counter1 < 4)
	{
		while (counter2 < 4)
		{
			output[counter1][counter2] = 0;
			counter2++;
		}
		counter1++;
		counter2 = 0;
	}
	return (output);
}

int	check_sudoku(int **grid, int row, int column, int num)
{
	int	cnt_row;
	int	cnt_col;

	cnt_row = 0;
	cnt_col = 0;
	while (cnt_col < N)
	{
		if (grid[row][cnt_col] == num)
			return (0);
		cnt_col++;
	}
	while (cnt_row < N)
	{
		if (grid[cnt_row][column] == num)
			return (0);
		cnt_row++;
	}
	return (1);
}

void	free_input_output(int **input, int **output)
{
	int	counter;

	counter = 0;
	while (counter < 4)
	{
		free(input[counter]);
		free(output[counter]);
		counter++;
	}
	free(input);
	free(output);
}
