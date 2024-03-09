/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:48:48 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/13 18:50:47 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if ((to_find[j] == '\0') || ((str[i] == to_find[j])
				&& (j > 0) && (to_find[j + 1] == '\0')))
			return (temp);
		else if ((str[i] != to_find[j]) && (j > 0) && (to_find[j] != '\0'))
			j = 0;
		else if ((str[i] == to_find[j]) && (j > 0) && (to_find[j] != '\0'))
			++j;
		if (str[i] == to_find[j] && j == 0)
		{
			temp = &(str[i]);
			++j;
		}
		i++;
	}
	return (0);
}
