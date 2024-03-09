/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:35:01 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 15:11:25 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void    error_msg(int error)
{
    if (error == 1)
        ft_putstr("map error\n");
}
void    exit_prog(char **grid, char *tab, int error)
{
    free(grid);
    free(tab);
    error_msg(error);
}