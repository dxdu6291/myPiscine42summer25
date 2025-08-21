/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:19:10 by kados-sa          #+#    #+#             */
/*   Updated: 2025/08/13 19:42:51 by kados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	teste(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	n;
	int	m;

	n = 0;
	m = 1;
	while (str[n])
	{
		if (!teste(str[n]))
			m = 1;
		else if (m)
		{
			if (str[n] >= 'a' && str[n] <= 'z')
				str[n] = str[n] - 32;
			m = 0;
		}
		else
		{
			if (str[n] >= 'A' && str[n] <= 'Z')
				str[n] = str[n] + 32;
			m = 0;
		}
		n++;
	}
	return (str);
}
