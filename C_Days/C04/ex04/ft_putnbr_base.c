/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:12:16 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 19:02:21 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

int	check_base(char *base)
{
	unsigned int	tr_pr;
	unsigned int	tr_snd;

	tr_pr = 0;
	tr_snd = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[tr_pr])
	{
		tr_snd = 0;
		while (base[tr_snd])
		{
			if ((base[tr_pr] == base[tr_snd] && tr_pr != tr_snd)
				|| base[tr_snd] == '+' || base[tr_snd] == '-'
				|| (base[tr_snd] <= 32 && base[tr_snd] != 127))
				return (0);
			tr_snd++;
		}
	tr_pr++;
	}
	return (1);
}

void	ft_putnbr_base_long(long nbr, char *base)
{
	int	len_base;

	if (!(check_base(base)))
		return ;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= len_base)
	{
		ft_putnbr_base_long(nbr / len_base, base);
		write(1, &base[nbr % len_base], 1);
	}
	if (nbr < len_base)
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int x, char *base)
{
	ft_putnbr_base_long(x, base);
}
/*
int main(void)
{
	int count;
	int test[] = {-12, 42, 2147483647, -2147483648, 0, -0, -69};
    char *base = "1 3";
	for  (count = 0; count <= 6; count++)
	{
		ft_putnbr_base(test[count], base);
		//printf("\n");
	}
    return 0;
}*/
