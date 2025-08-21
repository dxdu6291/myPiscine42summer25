/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravmoren <ravmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:48:49 by ravmoren          #+#    #+#             */
/*   Updated: 2025/08/20 14:21:40 by ravmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

/* int main(void)
{
	int nb = -23;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
} */