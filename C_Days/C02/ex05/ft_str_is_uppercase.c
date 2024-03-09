/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:53:33 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/12 19:45:13 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		upper;
	int		counter;
	char	car;

	upper = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		car = str[counter];
		if ((car < 65 || car > 90))
			upper = 0;
	counter++;
	}
	return (upper);
}
