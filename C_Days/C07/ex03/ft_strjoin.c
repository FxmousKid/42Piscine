/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:45:02 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/23 09:45:06 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str && str[counter])
		counter++;
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	while (dest && src && *src)
		*dest++ = *src++;
	return (dest);
}

int	calc_malloc(int size, char **strs, char *sep)
{
	int	size_malloc;
	int	iter_strs;

	size_malloc = 1;
	if (size == 0)
		return (1);
	iter_strs = -1;
	while (++iter_strs < size)
		size_malloc += ft_strlen(strs[iter_strs]);
	size_malloc += (ft_strlen(sep) * (size - 1));
	return (size_malloc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_malloc;
	int		iter_strs;
	char	*tab;
	char	*tmp;

	iter_strs = -1;
	size_malloc = calc_malloc(size, strs, sep);
	tab = (char *) malloc(sizeof(char) * size_malloc);
	if (tab == NULL)
		return (NULL);
	if (size == 0)
		return (tab[0] = 0, tab);
	tmp = tab;
	iter_strs = -1;
	while (++iter_strs < size - 1)
	{
		tmp = ft_strcat(tmp, strs[iter_strs]);
		tmp = ft_strcat(tmp, sep);
	}
	tmp = ft_strcat(tmp, strs[iter_strs]);
	tab[--size_malloc] = '\0';
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int index = 1;
	--argc;
	argv++;
	printf("\nft_strjoin(%d, (", argc-1);
	while (index < argc)
		printf(" '%s',", argv[index++]);
	printf("), '%s')\n", argv[0]);
	if (++argc >= 2)
	{
		//printf("\n\nargc = %d\n\n", argc);
		char *s = ft_strjoin((argc - 2), &argv[1], argv[0]);
		printf("output -> [%s]\n", s);
	}
}*/
