/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:33:36 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/12 19:37:16 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	comp;

	comp = 0;
	i = 0;
	while (src[comp] != '\0')
		comp++;
	if (size < 1)
		return (comp);
	while (i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (comp);
}
/*
int main(void)
{
  char s1[] = "davaicavai";
  char s2[] = "davaicavai";
  char *s3 = "hello";
  strlcpy(s1, s3, sizeof(s1));
  ft_strlcpy(s2, s3, sizeof(s2));
  
  char s4[] = "davai";
  char s5[] = "davai";
  char *s6 = "ya nye ruski";
  strlcpy(s4, s6, sizeof(s4));
  ft_strlcpy(s5, s6, sizeof(s5));
    
  return 0;
}*/
