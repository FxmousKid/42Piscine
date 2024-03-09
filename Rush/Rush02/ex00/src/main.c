/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:46:02 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 22:56:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"
#define FILE "numbers.dict"

int	main(void)
{
	char	*dict;

	dict = parse_file(FILE);
	if (dict == NULL)
		return (0);
	print_n_digits("123123", dict);
	free(dict);
	return (0);
}
