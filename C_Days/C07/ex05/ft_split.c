/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:42:02 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/27 10:42:02 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* this comment was made form my mac
 * get used to one that passes moulinette & and can remember it easily.
 * basically im trying to tinker with some split implementation so that i can
 */

// Function that finds if a (char c)  is in a (char * charset)
int	occurences(char c, char *sep_charset)
{
	while (sep_charset && c && *sep_charset)
	{
		if (c == *sep_charset++)
			return (1);
	}
	if (c == '\0')
		return (1);
	return (0);
}

// implementing a count word that works with a (char *) as a sep
int	count_words(char *str, char *sep)
{
	int	wordcount;
	int	f_change;

	if (str == NULL || sep == NULL)
		return (0);
	wordcount = 0;
	f_change = 1;
	while (*str)
	{
		wordcount += (f_change && !occurences(*str, sep));
		f_change = (occurences(*str++, sep));
	}
	return (wordcount);
}

void	ft_strncpy(char *dest, char *src, char *sep)
{
	int	counter;

	if (!src && !*src)
		return ;
	counter = -1;
	while (src[++counter] && !occurences(src[counter], sep))
		dest[counter] = src[counter];
	dest[counter] = '\0';
	return ;
}

void	sub_split(char **tab, char *str, char *charset)

{
	int	len_word;

	len_word = 0;
	while (str && charset && *str)
	{
		if (!occurences(*str, charset))
		{
			while (!occurences(*(str + len_word), charset))
				len_word++;
			*tab = (char *) malloc((sizeof(char) * len_word) + 1);
			if (*tab == NULL)
				return ;
			ft_strncpy(*tab++, str, charset);
			str += len_word;
			len_word = 0;
		}
		else if (occurences(*str, charset))
			str++;
	}
	*tab = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **) malloc((sizeof(char *) * count_words(str, charset)) + 1);
	if (tab == NULL)
		return (0);
	sub_split(tab, str, charset);
	return (tab);
}

int	main(int argc, char **argv)
{
	//char    tab[3][5];
	//int     n;
	//n  = 4;
	if (argc != 3)
		return (0);
	char **tab = ft_split(argv[1], argv[2]);
	printf("\ntab = ft_split('%s', '%s')\noutput -> [", argv[1], argv[2]);
	while (*tab)
		printf("%s,", *tab++);
	printf("]\n\n");
	return (0);
	//printf("strcpy(%s, %s, %d) = ", tab[0], str, n);
	//ft_strncpy(tab[0], str, n);
	//printf("%s", tab[0]);
	//printf("wordCount('%s', '%s') = %d\n", str, sep, count_words(str, sep));
	//printf("occ(%c, %s) = %d\n", str[2], sep, occurences(str[3], sep));

}
