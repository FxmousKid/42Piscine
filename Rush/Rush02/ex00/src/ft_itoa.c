/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:49:05 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:03:49 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

static int	digitcount(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	*revarray(int *a, int size)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < size / 2)
	{
		tmp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = tmp;
		i++;
	}
	return (a);
}

static int	*getdigits(int n, int size)
{
	int	*a;
	int	r;
	int	i;

	r = 0;
	i = 0;
	a = malloc(size * sizeof(int));
	if (a == NULL)
		return (NULL);
	if (n == 0)
		a[i] = 0;
	while (n != 0)
	{
		r = n % 10;
		if (r < 0)
			r *= -1;
		a[i] = r;
		i++;
		n /= 10;
	}
	a = revarray(a, size);
	return (a);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		*digits;
	int		digits_size;
	int		i;
	int		j;

	digits_size = digitcount(n);
	digits = getdigits(n, digits_size);
	if (n < 0)
		digits_size++;
	nbr = malloc(digits_size + 1 * sizeof(char));
	if (nbr == NULL || digits == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (n < 0)
		nbr[i++] = '-';
	while (i < digits_size)
	{
		nbr[i] = digits[j] + '0';
		i++;
		j++;
	}
	nbr[i] = 0;
	return (free(digits), nbr);
}
