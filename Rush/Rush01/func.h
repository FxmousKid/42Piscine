/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:06:48 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/18 22:15:44 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H

//put  display func in here
// and other func
void	print_grid(int **tab);
int		**parse_vue(char *str, int **input);
int		**fill_output(int **output);
int		check_sudoku(int **grid, int row, int column, int num);
int		algo(int **grid, int **vues, int row, int col);
int		is_valid_matrix(int **matrix, int **vues);
int		arg_validate(int argc, char **argv);
#endif
