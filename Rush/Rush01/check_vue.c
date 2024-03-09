/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 07:48:51 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/18 20:46:42 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

int	is_valid_rup(int **matrix, int **vues, int col)
{
	int	index;
	int	max;
	int	counter;

	max = 0;
	index = 0;
	counter = vues[0][col];
	while (index < 4)
	{
		if (matrix[index][col] > max)
		{
			max = matrix[index][col];
			counter--;
		}
		index++;
	}
	if (counter != 0)
		return (0);
	return (1);
}

int	is_valid_rdown(int **matrix, int **vues, int col)
{
	int	index;
	int	max;
	int	counter;

	max = 0;
	index = 3;
	counter = vues[1][col];
	while (index >= 0)
	{
		if (matrix[index][col] > max)
		{
			max = matrix[index][col];
			counter--;
		}
		index--;
	}
	if (counter != 0)
		return (0);
	return (1);
}

int	is_valid_cleft(int **matrix, int **vues, int row)
{
	int	index;
	int	max;
	int	counter;

	max = 0;
	index = 0;
	counter = vues[2][row];
	while (index < 4)
	{
		if (matrix[row][index] > max)
		{
			max = matrix[row][index];
			counter--;
		}
		index++;
	}
	if (counter != 0)
		return (0);
	return (1);
}

int	is_valid_cright(int **matrix, int **vues, int row)
{
	int	index;
	int	max;
	int	counter;

	max = 0;
	index = 3;
	counter = vues[3][row];
	while (index >= 0)
	{
		if (matrix[row][index] > max)
		{
			max = matrix[row][index];
			counter--;
		}
		index--;
	}
	if (counter != 0)
		return (0);
	return (1);
}

int	is_valid_matrix(int **matrix, int **vues)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (! is_valid_rup(matrix, vues, index)
			|| ! is_valid_rdown(matrix, vues, index)
			|| ! is_valid_cleft(matrix, vues, index)
			|| ! is_valid_cright(matrix, vues, index))
			return (0);
		index++;
	}
	return (1);
}
