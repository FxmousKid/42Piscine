/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 05:44:13 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 15:12:28 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_grid
{
	int length;
	char empty;
	char ob;
	char full;
} t_grid;

typedef struct s_case
{
	int	value;
	int	row;
	int	col;
}	t_case;

void	display_grid(char **grid);
void	exit_prog(char **grid, char *tab, int error);
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);
char 	**split_grid(char *grid);
char	*ft_fill_file(char *argv);
int 	ft_atoi(char *nbr, int n);
t_grid	get_size(char *grid);


#endif
