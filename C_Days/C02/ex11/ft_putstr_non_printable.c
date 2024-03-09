/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:46:19 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/13 16:02:14 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_str_is_printable(char car)
{
	int	printable;

	printable = 0;
	if (car >= 32 && car < 127)
			printable = 1;
	return (printable);
}

static void	conv_hexa(char c)
{
	char	*digits;
	char	rendue[10];

	digits = "0123456789abcdef";
	if (c >= 16)
	{
		write(1, "0", 1);
		rendue[0] = digits[c % 16];
		write(1, &rendue[0], 1);
		if (c == 127)
		{
			rendue[0] = 7;
			rendue[1] = 'E';
		}
	}
	else
	{
		rendue[1] = digits[c % 16];
		write(1, "0", 1);
		write(1, &rendue[1], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		if (ft_str_is_printable(str[counter]) == 1)
		{
			write(1, &str[counter], 1);
		}
		else
		{
			write(1, "\\", 1);
			conv_hexa(str[counter]);
		}
		counter++;
	}
}
