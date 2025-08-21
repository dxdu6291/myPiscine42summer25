/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:02:15 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 20:57:43 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_num(char num, char ***dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		if (dict[i][0][0] == num && dict[i][0][1] == '\0')
		{
			return (dict[i][1]);
		}
		i++;
	}
	return (0);
}

char	*find_hundred(char ***dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		if (ft_strcmp(dict[i][0], "100") == 0)
		{
			return (dict[i][1]);
		}
		i++;
	}
	return (0);
}

char	*find_dozen(char num, char ***dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		if (num == dict[i][0][0] && ft_strlen(dict[i][0]) == 2)
			return (dict[i][1]);
		i++;
	}
	return (0);
}

char	*find_teens(char *num, char ***dict)
{
	int		i;
	char	temp[3];

	i = 0;
	temp[0] = num[0];
	temp[1] = num[1];
	temp[2] = '\0';
	while (dict[i] != NULL)
	{
		if (ft_strcmp(dict[i][0], temp) == 0)
			return (dict[i][1]);
		i++;
	}
	return (0);
}

void	print_thousands(int i, char **nums, char ***dict)
{
	int	count;
	int	size;

	count = i;
	size = 0;
	while (nums[count] != NULL)
		count++;
	count = count - i;
	size = ((count - 1) * 3) + 1;
	i = 0;
	if (size >= 3)
	{
		while (dict[i] != NULL)
		{
			if (ft_strlen(dict[i][0]) == size)
			{
				ft_putstr(dict[i][1]);
				write(1, " ", 1);
				return ;
			}
			i++;
		}
	}
}
