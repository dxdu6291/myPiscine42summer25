/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:12:27 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/21 20:42:21 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	while (1)
	{
		if (nb % 2 == 0)
			nb++;
		i = 3;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				break ;
			i += 2;
		}
		if (i * i > nb)
			return (nb);
		nb++;
	}
}
