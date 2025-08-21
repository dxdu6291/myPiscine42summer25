/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_errors_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:33:16 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 20:34:56 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	valid_helper(char ***dict_original, char ***dict_new, int condition)
{
	if (condition)
		ft_putstr("Dict Error\n");
	free_dict(dict_original);
	free_dict(dict_new);
}

int	valid_new_dict(char **arg_value, int i, int j, int diff)
{
	char	***dict_original;
	char	***dict_new;

	dict_original = get_dict(DICT_DIR);
	dict_new = get_dict(arg_value[1]);
	while (dict_original[i] != NULL)
	{
		while (dict_new[j] != NULL)
		{
			if (ft_strcmp(dict_original[i][0], dict_new[j][0]) == 0)
				diff = 1;
			j++;
		}
		if (diff == 1)
			diff = 0;
		else
		{
			valid_helper(dict_original, dict_new, 1);
			return (0);
		}
		j = 0;
		i++;
	}
	valid_helper(dict_original, dict_new, 0);
	return (1);
}
