/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_2_digits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:28:07 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:00:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

void	print_2_digit(char *str, char *dict_clean)
{
	char	*t1w;
	char	*t2w;	
	char	*itoa1;
	char	*itoa2;

	if (ft_atoi(str) < 20 || ft_atoi(str) % 10 == 0)
	{
		itoa1 = ft_itoa(ft_atoi(str));
		t1w = get_word(itoa1, dict_clean);
	}
	else
	{
		itoa1 = ft_itoa(ft_atoi(str) - (ft_atoi(str) % 10));
		t1w = get_word(itoa1, dict_clean);
	}
	itoa2 = ft_itoa(ft_atoi(str) % 10);
	t2w = get_word(itoa2, dict_clean);
	if (ft_atoi(str) < 20 || ft_atoi(str) % 10 == 0)
		ft_putstr(t1w);
	else
		put_2xstr_and_space(t1w, t2w);
	compact_free_and_space(t1w, t2w, itoa1, itoa2);
	return ;
}

void	put_2xstr_and_space(char *t1w, char *t2w)
{
	ft_putstr(t1w);
	write(1, " ", 1);
	ft_putstr(t2w);
}

void	compact_free_and_space(char *t1w, char *t2w, char *itoa1, char *itoa2)
{
	free(t1w);
	free(t2w);
	free(itoa1);
	free(itoa2);
}
