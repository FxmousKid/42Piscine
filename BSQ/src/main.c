/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:29:19 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 15:05:11 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int main(int argc, char **argv)
{
    char *tab;
    char **grid;
    int i;
    t_grid spec;

    i = 1;
    while (i < argc)
    {
        tab = ft_fill_file(argv[i]);
        spec = get_size(tab);
        grid = split_grid(tab);
        if (!tab || !grid)
        {
            exit_prog(grid, tab, 1);
        }
        display_grid(grid);
        i++;
    }
    return (0);
}