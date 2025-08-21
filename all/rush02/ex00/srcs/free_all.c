/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:01:42 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 19:26:14 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_dict(char ***dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		free(dict[i][0]);
		free(dict[i][1]);
		free(dict[i]);
		i++;
	}
	free(dict);
}

void	free_nums(char **nums)
{
	int	i;

	i = 0;
	while (nums[i] != NULL)
	{
		free(nums[i]);
		i++;
	}
	free(nums);
}
