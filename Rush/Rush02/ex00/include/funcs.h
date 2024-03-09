/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:10:34 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/25 22:58:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include <fcntl.h>
# include <stdio.h> 
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		file_size(char *file_name);
int		get_remaining_len(char *str);
int		power(int nb, int n);

char	*ft_itoa(int n);
char	*parse_file(char *file_name);
char	*ft_strstr(char *str, char *to_find);
char	*clean_parsed_array(char *str_unclean);
char	*parse_word_from_strstr(char *str);
char	*print_3_chars(char *num);
char	*malloc_digits_to_work_with(char *num, int size_malloc);
char	*get_word(char *num_to_get, char *dict_unsort_uncl);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);

void	ft_putstr(char *str);
void	print_2_digit(char *str, char *dict_clean);
void	put_2xstr_and_space(char *t1w, char *t2w);
void	compact_free_and_space(char *t1w, char *t2w, char *itoa1, char *itoa2);
void	print_3_digit(char *str, char *dict_clean);
void	print_hundreds(char *str);
void	print_exponent_10(int remaining_len, char *dict_clean);
void	print_n_digits(char *str, char *dict_clean);

#endif 
