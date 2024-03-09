/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:44:22 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/13 22:38:59 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] && s2[index] && s1[index] == s2[index])
		index++;
	if (index == n)
		return (0);
	else
		return (s1[index] - s2[index]);
}
