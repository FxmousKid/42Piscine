/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:42:11 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/10 15:44:44 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		lower;
	int		counter;
	char	car;

	lower = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		car = str[counter];
		if ((car < 97 || car > 122))
			lower = 0;
	counter++;
	}
	return (lower);
}
