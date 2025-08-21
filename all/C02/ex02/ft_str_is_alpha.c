/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:36:21 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/20 01:42:00 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_az(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_checka_z(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((ft_check_az(str[i])) || (ft_checka_z(str[i]))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
