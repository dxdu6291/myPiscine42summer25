/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:20:39 by dneiva-l          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:04 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(-12345);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	return (0);
}
