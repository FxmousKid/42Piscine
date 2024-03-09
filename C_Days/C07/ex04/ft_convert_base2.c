/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:23:55 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/26 13:23:55 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len_nbr(long nbr, char *base, int index, int len_base)
{
	if (nbr < 0)
	{
		index += 1;
		nbr *= -1;
	}
	if (nbr > len_base - 1)
		return (get_len_nbr(nbr / len_base, base, index + 1, len_base));
	else
		return (index + 1);
}
