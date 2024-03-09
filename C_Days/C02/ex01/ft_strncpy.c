/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:07:12 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/12 21:13:40 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
  char s1[] = "davaicavai";
  char s2[] = "davaicavai";
  char *s3 = "hello";
  strncpy(s1, s3, 5);
  ft_strncpy(s2, s3, 5);
  
  char s4[] = "davai";
  char s5[] = "davai";
  char *s6 = "ya nye ruski";
  strncpy(s4, s6, 8);
  ft_strncpy(s5, s6, 8);
    
  return 0;
}*/
