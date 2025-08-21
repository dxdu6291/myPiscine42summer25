/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:08:08 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/20 14:16:11 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	main_helper(char ***dict, char **nums)
{
	num_print(dict, nums);
	free_dict(dict);
	free_nums(nums);
}

int	main(int argc, char **argv)
{
	char	***dict;
	char	**nums;

	if (!(argc >= 2 && argc <= 3))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		if (!full_validity_check(DICT_DIR, argc, argv))
			return (1);
		dict = get_dict(DICT_DIR);
		nums = parse_num(argv[1], ft_strlen(argv[1]));
	}
	else
	{
		if (!full_validity_check(argv[1], argc, argv))
			return (1);
		dict = get_dict(argv[1]);
		nums = parse_num(argv[2], ft_strlen(argv[2]));
	}
	main_helper(dict, nums);
	return (0);
}
