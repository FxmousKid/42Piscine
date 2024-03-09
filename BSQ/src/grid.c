/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 06:07:48 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 15:03:41 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

char **split_grid(char *grid)
{
    char **sl_grid;

    sl_grid = ft_split(grid, "\n");
    if (!grid)
        return (NULL);
    return (sl_grid);
}

void    display_grid(char **grid)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (grid[i])
    {
        while (grid[i][j])
        {
            write(1, &grid[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }
}