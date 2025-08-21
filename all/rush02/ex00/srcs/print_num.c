/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:29:31 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 20:57:10 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	hundreds_case(char ***dict, char **nums, int i)
{
	ft_putstr(find_num(nums[i][0], dict));
	write(1, " ", 1);
	ft_putstr(find_hundred(dict));
	write(1, " ", 1);
}

void	dozens_case(char ***dict, char **nums, int i)
{
	ft_putstr(find_dozen(nums[i][1], dict));
	write(1, " ", 1);
	if (nums[i][2] != '0')
	{
		ft_putstr(find_num(nums[i][2], dict));
		write(1, " ", 1);
	}
}

void	teens_case(char ***dict, char **nums, int i)
{
	ft_putstr(find_teens(&nums[i][1], dict));
	write(1, " ", 1);
}

void	singles_case(char ***dict, char **nums, int i)
{
	ft_putstr(find_num(nums[i][2], dict));
	write(1, " ", 1);
}

void	num_print(char ***dict, char **nums)
{
	int	i;
	int	is_zero;

	i = 0;
	is_zero = 1;
	while (nums[i] != NULL)
	{
		if (nums[i][0] != '0')
			hundreds_case(dict, nums, i);
		if (nums[i][1] >= '2')
			dozens_case(dict, nums, i);
		else if (nums[i][1] == '1')
			teens_case(dict, nums, i);
		else if (nums[i][1] == '0' && nums[i][2] != '0')
			singles_case(dict, nums, i);
		if (nums[i][0] != '0' || nums[i][1] != '0' || nums[i][2] != '0')
		{
			print_thousands(i, nums, dict);
			is_zero = 0;
		}
		i++;
	}
	if (is_zero)
		ft_putstr(find_num('0', dict));
	write(1, "\n", 1);
}
