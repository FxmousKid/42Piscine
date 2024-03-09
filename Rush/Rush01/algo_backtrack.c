/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_backtrack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 03:31:04 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/20 20:53:42 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"
#include <stdio.h>
#define N 4
#define TRUE 1
#define FALSE 0

int	algo(int **grid, int **vues, int row, int col)
{
	int	num;

	if (row == N - 1 && col == N)
		return ( is_valid_matrix(grid, vues));
	if (col == N )
	{
		col = 0;
		row++;
	}
	num = 1;
	while (num <= N)
	{
		if (check_sudoku(grid, row, col, num) == TRUE)
		{
			grid[row][col] = num;
			if (algo(grid, vues, row, col + 1) == TRUE)
				return (1);
		}
		num++;
		grid[row][col] = 0;
	}
	return (0);
}
