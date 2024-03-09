/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:41:42 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/10 23:03:43 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	is_min_1_maj_2(int choice, char c)
{
	if (choice == 1)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		return (0);
	}
	else
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		return (0);
	}
}

static int	is_alphanum(char car)
{
	int		alphanum;

	alphanum = 1;
	{
		if ((car < 65 || car > 90) && (car < 97 || car > 122) \
			&& (car < 48 || car > 57))
			alphanum = 0;
	}
	return (alphanum);
}

char	*ft_strcapitalize(char *str)
{
	int	is_maj;
	int	counter;

	counter = 0;
	is_maj = 1;
	while (str[counter] != '\0')
	{
		if (is_alphanum(str[counter]) == 1)
		{
			if ((is_maj == 1) && (is_min_1_maj_2(1, str[counter]) == 1))
				str[counter] -= 32;
			else
			{
				if ((is_maj == 0) && (is_min_1_maj_2(2, str[counter]) == 1))
					str[counter] += 32;
			}
				is_maj = 0;
		}
		else
			is_maj = 1;
		counter++;
	}
	return (str);
}
