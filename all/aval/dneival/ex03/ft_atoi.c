/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneiva-l <dneiva-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:49:27 by dneiva-l          #+#    #+#             */
/*   Updated: 2025/08/19 14:13:43 by dneiva-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int con;
	int sign;

	i = 0;
	con = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		con = (con * 10) + (str[i] - '0');
		i++;
	}
	return (con * sign);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("   +++42"));
	printf("%d\n", ft_atoi("   -+--+56"));
	printf("%d\n", ft_atoi("   00099"));
	printf("%d\n", ft_atoi("abc123"));
}
*/