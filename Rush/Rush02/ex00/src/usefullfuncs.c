/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefullfuncs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:11:01 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:15:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] \
			&& str[i + j] != '\0' && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0' && (str[i + j] < '0' || str[i + j] > '9'))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] && str != NULL)
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

char	*clean_parsed_array(char *str_unclean)
{
	int		size_str_unclean;
	char	*str_clean;
	int		counter;

	counter = -1;
	size_str_unclean = ft_strlen(str_unclean);
	str_clean = (char *) malloc(sizeof(char) * size_str_unclean + 1);
	if (str_clean == NULL || str_unclean == NULL)
		return (NULL);
	while (*str_unclean)
	{
		if (*str_unclean != ' ' || (*str_unclean >= '\t' && \
					*str_unclean <= '\r'))
		{
			counter++;
			str_clean[counter] = *str_unclean;
		}
		str_unclean++;
	}
	counter++;
	str_clean[counter] = '\0';
	return (str_clean);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] && str)
		counter++;
	return (counter);
}
