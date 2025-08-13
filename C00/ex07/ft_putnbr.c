/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:33:46 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/07 10:58:24 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		x *= -1;
		ft_print_char('-');
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
	{
		ft_print_char(x + 48);
	}
}
int main()
{
	ft_putnbr(-42);
	return 0;
}