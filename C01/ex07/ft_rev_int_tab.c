/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:10:02 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/11 22:17:18 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tsize;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tsize = tab[i];
		tab[i] = tab[j];
		tab[j] = tsize;
		i++;
		j--;
	}
}
