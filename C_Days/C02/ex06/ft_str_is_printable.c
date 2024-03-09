/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:58:50 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/11 00:02:00 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		printable;
	int		counter;
	char	car;

	printable = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		car = str[counter];
		if (car < 32 || car == 127)
			printable = 0;
	counter++;
	}
	return (printable);
}
