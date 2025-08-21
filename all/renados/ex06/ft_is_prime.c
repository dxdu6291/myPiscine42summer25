/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renados- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:11:20 by renados-          #+#    #+#             */
/*   Updated: 2025/08/20 14:23:26 by renados-         ###   ########.fr       */
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
/* #include <stdio.h>

int main(void)
{
    printf("%d\n", ft_is_prime(4));
    return (0);
} */
