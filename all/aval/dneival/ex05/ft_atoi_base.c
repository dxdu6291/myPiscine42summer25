/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:06:50 by dneiva-l          #+#    #+#             */
/*   Updated: 2025/08/19 18:37:08 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
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
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}
int	char_in_base(char c, char *base)
{
	int i;

	i = 0;
	while(base[i])
	{
		if (base[i] == c)
			return (i);
		i++;		
	}
	return (-1);
}
int	convert_base(char *str, char *base, int i)
{
	int res;
	int value;
	int base_len;

	res = 0;
	base_len = ft_strlen(base);
	while ((value = char_in_base(str[i], base)) != -1)
	{
		res = (res * base_len) + value;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;

	if (!is_valid_base(base))
		return (0);
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	return (convert_base(str, base, i) * sign);
}


#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("   ---+--+101", "01"));
	printf("%d\n", ft_atoi_base("   +++42", "0123456789"));
	printf("%d\n", ft_atoi_base("   -2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("   000yen", "poneyvif"));
	printf("%d\n", ft_atoi_base("zzz", "z"));
	printf("%d\n", ft_atoi_base("123", "0123+"));
}
