/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:50:14 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:02:03 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

char	*malloc_digits_to_work_with(char *num, int size_malloc)
{
	char	*str;
	int		index;

	index = 0;
	str = (char *) malloc(sizeof(char) * (size_malloc + 1));
	if (!str && !num)
		return (NULL);
	while (index < size_malloc)
	{
		str[index] = num[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

char	*print_3_chars(char *num)
{
	int		len_num;
	int		counter;
	char	*str;

	len_num = ft_strlen(num);
	counter = 0;
	while (counter < (len_num % 3))
		counter++;
	write(1, num, counter);
	str = malloc_digits_to_work_with(num, counter);
	if (!str)
		return (NULL);
	free(str);
	while (counter-- > 0)
		num++;
	return (num);
}
