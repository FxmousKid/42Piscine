/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 05:43:32 by ptheo             #+#    #+#             */
/*   Updated: 2024/02/28 15:16:40 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

t_grid	get_size(char *grid)
{
	t_grid cara;
	int	i;
	i = 0;

	while (grid[i] <= '9' && grid[i] >= '0')
		i++;
	cara.length = ft_atoi(grid, i);
	cara.empty = grid[i];
	i++;
	cara.ob = grid[i];
	i++;
	cara.full = grid[i];
	i++;
	return (cara);
}

int	ft_count_file(int fd)
{
	int		i;
	int		nbr_read;
	char	buf[1];

	i = 0;
	nbr_read = -1;
	while (nbr_read != 0)
	{
		nbr_read = read(fd, buf, 1);
		i++;
	}
	return (i);
}

char	*ft_fill_file(char *argv)
{
	int		fd;
	int		fd2;
	int		count;
	char	*c;
	int		nbr_read;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	fd2 = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	count = ft_count_file(fd2);
	c = malloc(count * sizeof(char));
	if (c == NULL)
		return (0);
	nbr_read = read(fd, c, (count - 1));
	c[count - 1] = '\0';
	close(fd);
	close(fd2);
	return (c);
}