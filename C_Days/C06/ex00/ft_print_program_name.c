/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:42:07 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:42:08 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char **argv)
{
	int	counter;

	counter = 0;
	while (argv[0][counter] != 0)
	{
		write(1, &argv[0][counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_print_program_name(argv);
	return (0);
}
