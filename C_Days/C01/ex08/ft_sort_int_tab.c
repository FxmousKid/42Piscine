/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:19:30 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/09 10:40:40 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tr_pr;
	int	tr_snd;
	int	c;

	tr_pr = 0;
	while (tr_pr < size)
	{
		tr_snd = tr_pr;
		while (tr_snd < size)
		{
			if (tab[tr_pr] > tab[tr_snd])
			{
				c = tab[tr_pr];
				tab[tr_pr] = tab[tr_snd];
				tab[tr_snd] = c;
			}
			tr_snd++;
		}
		tr_pr++;
	}
}
