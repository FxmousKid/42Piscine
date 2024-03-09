/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:37:09 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/10 15:40:25 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		is_num;
	int		counter;
	char	car;

	is_num = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		car = str[counter];
		if ((car < 48 || car > 57))
			is_num = 0;
	counter++;
	}
	return (is_num);
}
