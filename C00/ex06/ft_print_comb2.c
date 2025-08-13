/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:22:22 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/06 15:24:24 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_print_char(a / 10 + '0');
			ft_print_char(a % 10 + '0');
			ft_print_char(' ');
			ft_print_char(b / 10 + '0');
			ft_print_char(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				ft_print_char(',');
				ft_print_char(' ');
			}
			b++;
		}
		a++;
	}
}
