/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 01:12:25 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/20 01:38:34 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comparanum(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_comparalowaz(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_compara_upaz(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_comparatudo(char c)
{
	return (ft_comparanum(c) || ft_comparalowaz(c) || ft_compara_upaz(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (!ft_comparatudo(str[i]))
		{
			word = 1;
		}
		else if (word == 1)
		{
			if (ft_comparalowaz(str[i]))
				str[i] -= 32;
			word = 0;
		}
		else
		{
			if (ft_compara_upaz(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
