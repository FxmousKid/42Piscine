/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:07:41 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 12:10:47 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int ft_atoi(char *nbr, int n)
{
    int i;
    int total;

    i = 0;
    total = 0;
    while (i < n)
    {
        total *= 10 + (nbr[i] - '0');
        i++;
    }
    return (total);
}