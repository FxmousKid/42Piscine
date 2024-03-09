/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:25:10 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 23:04:45 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/funcs.h"

int	file_size(char *file_name)
{
	char	temp;
	int		size;
	int		file;

	size = 0;
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, &temp, 1))
		size++;
	close(file);
	return (size);
}

char	*parse_file(char *file_name)
{
	int		size;
	int		file;
	char	*tab;

	size = file_size(file_name);
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	tab = (char *) malloc((sizeof(char) * size) + 1);
	if (tab == NULL)
		return (NULL);
	read(file, tab, size);
	tab[size] = '\0';
	close(file);
	return (tab);
}

char	*parse_word_from_strstr(char *str)
{
	int		size_malloc;
	int		index;
	char	*word;

	size_malloc = 0;
	index = 0;
	while (*str != ':')
		str++;
	str++;
	while (str[index] != '\n')
	{
		index++;
		size_malloc++;
	}
	word = (char *) malloc(sizeof(char) * size_malloc + 1);
	if (word == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\n')
	{
		word[index] = str[index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	*get_word(char *num_to_get, char *dict_unsort_uncl)
{
	char	*str_clean;
	char	*str_to_parse;
	char	*word;

	str_clean = clean_parsed_array(dict_unsort_uncl);
	if (str_clean == NULL)
		return (NULL);
	str_to_parse = ft_strstr(str_clean, num_to_get);
	if (str_to_parse == NULL)
	{
		free(str_clean);
		return (NULL);
	}
	word = parse_word_from_strstr(str_to_parse);
	if (word == NULL)
	{
		free(str_clean);
		return (NULL);
	}
	free(str_clean);
	return (word);
}
