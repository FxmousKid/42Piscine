/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:09:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/28 10:09:52 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str && str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*dest;
	int		index;

	index = 0;
	len_src = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * len_src + 1);
	if (dest == NULL)
		return (0);
	while (src && index < len_src)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			index;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		tab[index].size = ft_strlen(av[index]);
		tab[index].str = av[index];
		tab[index].copy = ft_strdup(av[index]);
		if (tab[index].copy == NULL)
			return (NULL);
		index++;
	}
	tab[index].size = 0;
	tab[index].str = 0;
	tab[index].copy = 0;
	return (tab);
}
