/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 08:00:40 by rlaurean          #+#    #+#             */
/*   Updated: 2025/08/19 19:08:59 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int num)
{
	char	num_char;

	if (num >= 10)
		ft_putnbr(num / 10);
	num_char = (num % 10) + '0';
	write (1, &num_char, 1);
}

void	ft_putstr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		write (1, &str[pos], 1);
		pos++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	pos;

	pos = 0;
	while (par[pos].str != 0)
	{
		ft_putnbr(par[pos].size);
		write (1, "\n", 1);
		ft_putstr(par[pos].str);
		write (1, "\n", 1);
		ft_putstr(par[pos].copy);
		write (1, "\n", 1);
		pos++;
	}
}

int main(void)
{
	char    *strs[] = {"42lis" , "examshell", "teste", "ultima"};

	ft_show_tab(ft_strs_to_tab(4, strs));

}
