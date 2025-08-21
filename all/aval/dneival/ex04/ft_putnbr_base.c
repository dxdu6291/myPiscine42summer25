/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:26:44 by dneiva-l          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:04 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	len;
	
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	long nb;

	if (!is_valid_base(base))
		return;
	base_len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	write(1, &base[nb % base_len], 1);
}


#include <stdio.h>

int main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(255, "0123456789abcdef");
	write(1, "\n", 1);

	ft_putnbr_base(125, "poneyvif");
	write(1, "\n", 1);

	ft_putnbr_base(42, "");
	write(1, "\n", 1);

	ft_putnbr_base(42, "0+1");
	write(1, "\n", 1);
}
