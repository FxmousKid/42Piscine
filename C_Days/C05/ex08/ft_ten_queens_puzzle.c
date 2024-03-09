/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:18:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:20:42 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	pos_check(int **grid, int row, int col)
{
	int	count;

	count = 0;
	while (count < 10)
	{
		if (grid[row][count] == 1)
			return (0);
		else if (grid[count][col] == 1)
			return (0);
		else if (grid[row % 10][col % 10] == 1)
			return (0);
		count++;
		row++;
		col++;
	}
	count = 0;
	while (count > 10)
	{
		if (grid[row % 10][col % 10] == 1)
			return (0);
		count++;
		row--;
		col--;
	}
	return (1);
}

int	**ft_ten_queen_sex(int **grid, int row, int col, int q_count)
{
	if (row == 9 && col == 10 && q_count == 10)
		return (1);
	if (col == 10)
	{
		row++;
		col = 0;
	}
	if (pos_check(grid, row, col) == 1)
	{
		grid[row][col] = 1;
		q_count++;
		if (ft_ten_queen_sex(grid, row, col + 1, q_count) == 1)
			return (1);
	}
	grid[row][col] = 0;
	return (0);
}
/*
int	ft_ten_quens_puzzle(void)
{

}
*/

void	print_grid(int **tab)
{
	int	counter1;
	int	counter2;
	int	holder;

	counter1 = 0;
	counter2 = 0;
	while (counter1 < 10)
	{
		while (counter2 < 10)
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

int	**fill_output(int **output)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (counter1 < 10)
	{
		while (counter2 < 10)
		{
			output[counter1][counter2] = 0;
			counter2++;
		}
		counter1++;
		counter2 = 0;
	}
	return (output);
}


int	main(void)
{
	int	**grid;
	int	counter1;

	counter1 = 0;
	grid = (int **)malloc(10 * sizeof(int*));
	while (counter1 < 10)
	{
		grid[counter1] = (int *)malloc(10 * sizeof(int));
		counter1++;
	}
	fill_output(grid);
	print_grid(grid);
	return (0);
}
