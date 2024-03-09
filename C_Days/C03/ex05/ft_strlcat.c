/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:50:23 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/13 18:50:30 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dst;
	unsigned int	len_src;

	i = 0;
	len_dst = ft_strlen2(dest);
	len_src = ft_strlen2(src);
	if (size <= len_dst)
	{
		return (size + len_src);
	}
	else
	{
		while (len_dst + i < size - 1 && src[i])
		{
			dest[len_dst + i] = src[i];
			i++;
		}
	}
	dest[len_dst + i] = '\0';
	return (len_dst + len_src);
}



***            ******         ******        ***   ***                  ****       ****    *********     ***
***           ********       ********       ***  ***                   *****     *****    *********     ***
***           ***  ***       ***  ***       *** ***                    ******   ******    ***           ***
***           ***  ***       ***  ***       ******                     *** *** *** ***    *********     ***
***           ***  ***       ***            ******                     ***  *****  ***    *********     ***
***           ***  ***       ***            *** ***                    ***   ***   ***    ***           ***
***           ***  ***       ***  ***       ***  ***                   ***         ***    ***
***********   ********       ********       ***   ***                  ***         ***    *********     ***
***********    ******         ******        ***    ***                 ***         ***    *********     ***
