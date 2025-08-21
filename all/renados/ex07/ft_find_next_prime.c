/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renados- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:22:16 by renados-          #+#    #+#             */
/*   Updated: 2025/08/20 14:22:43 by renados-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	count = 1;
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb = (nb + 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next(8));
	return (0);
}
*/
