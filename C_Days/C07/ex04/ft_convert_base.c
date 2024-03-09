/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:23:42 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/26 13:23:42 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	get_len_nbr(int nbr, char *base, int index, int len_base);

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == '-'
			|| base[i] == '+')
			return (0);
		while (base[j])
		{
			if (i != j)
			{
				if (base[i] == base[j])
					return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	len_inbase(char c, char *base, int n)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i] && n)
			return (i);
		i++;
	}
	return (i);
}

int	get_nbr_base(char *nbr, char *base)
{
	long	index;
	long	signe;
	long	total;
	long	len_base;

	index = 0;
	signe = 1;
	total = 0;
	len_base = len_inbase(' ', base, 0);
	while ((nbr[index] <= 13 && nbr[index] >= 9) || nbr[index] == 32)
		index++;
	while (nbr[index] == '-' || nbr[index] == '+')
	{
		if (nbr[index] == '-')
			signe *= -1;
		index++;
	}
	while (len_inbase(nbr[index], base, 1) != len_base)
	{
		total = (total * len_base) + len_inbase(nbr[index], base, 1);
		index++;
	}
	return (total * signe);
}

void	convert_nbr_base(long nbr, char *result, char *base, int *index)
{
	if (nbr < 0)
	{
		result[*index] = '-';
		nbr *= -1;
		*index += 1;
	}
	if (nbr > len_inbase(' ', base, 0) - 1)
	{
		convert_nbr_base(nbr / len_inbase(' ', base, 0), result, base, index);
		result[*index] = base[nbr % len_inbase(' ', base, 0)];
		*index += 1;
	}
	else
	{
		result[*index] = base[nbr];
		*index += 1;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		len_basef;
	int		len_baset;
	int		i;
	long	deci;

	len_basef = len_inbase(' ', base_from, 0);
	len_baset = len_inbase(' ', base_to, 0);
	i = 0;
	if (!(len_basef < 2 || len_baset < 2))
	{
		if (check_base(base_from) && check_base(base_to))
		{
			deci = get_nbr_base(nbr, base_from);
			i = get_len_nbr(deci, base_to, 0, len_inbase(' ', base_to, 0));
			result = malloc((i + 2) * sizeof(char));
			i = 0;
			convert_nbr_base(deci, result, base_to, &i);
			result[i] = '\0';
			return (result);
		}
	}
	return (NULL);
}
