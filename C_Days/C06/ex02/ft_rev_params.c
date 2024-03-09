/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 02:51:51 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 02:51:54 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	display_rev_params(int argc, char **argv)
{
	argc--;
	while (argc != 0)
	{
		put_str(argv[argc]);
		write(1, "\n", 1);
		argc--;
	}
}

int	main(int argc, char **argv)
{
	display_rev_params(argc, argv);
	return (0);
}
