/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hundreds.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:14:17 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:09:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

void	print_hundreds(char *str)
{
	int	num;

	num = ft_atoi(str);
	if (num < 99)
		return ;
	ft_putstr("hundred ");
	return ;
}
