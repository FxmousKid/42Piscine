/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:23:47 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:08:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

void	print_3_digit(char *str, char *dict_clean)
{
	int		num;
	char	temp[2];
	char	*t1word;

	num = ft_atoi(str);
	if (num < 99)
		return (print_2_digit(str, dict_clean));
	t1word = get_word(ft_strncpy(temp, str, 1), dict_clean);
	ft_putstr(t1word);
	write(1, " ", 1);
	print_hundreds(str);
	free(t1word);
	if (str[1] != '0' || str[2] != '0')
		return (print_2_digit (++str, dict_clean));
	return ;
}

int	get_remaining_len(char *str)
{
	int	len_str;

	len_str = ft_strlen(str);
	return (len_str - (len_str % 3));
}

void	print_exponent_10(int remaining_len, char *dict_clean)
{
	char	*itoa1;
	char	*word1;

	if (remaining_len < 3)
		return ;
	itoa1 = ft_itoa(power(10, remaining_len));
	word1 = get_word(itoa1, dict_clean);
	ft_putstr(word1);
	write(1, " ", 1);
	free(itoa1);
	free(word1);
	return ;
}

void	print_n_digits(char *str, char *dict_clean)
{
	char	tmp[4];

	if (ft_strlen(str) % 3 != 0)
	{
		print_3_digit(ft_strncpy(tmp, str, (ft_strlen(str) % 3)), dict_clean);
		write(1, " ", 1);
		print_exponent_10(get_remaining_len(str), dict_clean);
		str += (ft_strlen(str) % 3);
	}
	while (*str)
	{
		print_3_digit(ft_strncpy(tmp, str, 3), dict_clean);
		str += 3;
		print_exponent_10(get_remaining_len(str), dict_clean);
	}
	return ;
}
