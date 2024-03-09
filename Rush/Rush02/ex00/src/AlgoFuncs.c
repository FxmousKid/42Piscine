/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AlgoFuncs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:07:30 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 22:57:14 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

int	ft_atoi(char *str)
{
	int	rendue;
	int	sign;

	rendue = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rendue = *str - '0' + 10 * rendue;
		str++;
	}
	return (rendue * sign);
}

int	power(int nb, int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (nb * power(nb, n - 1));
}
