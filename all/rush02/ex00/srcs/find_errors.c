/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:26:06 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 20:19:21 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	valid_args(int arg_count, char **arg_value)
{
	int	fd;

	if (arg_count == 2 && !str_is_numeric(arg_value[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	else if (arg_count == 3 && !str_is_numeric(arg_value[2]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (arg_count == 2)
		fd = open(DICT_DIR, O_RDONLY);
	else
		fd = open(arg_value[1], O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}

int	valid_dict(char *dict_dir)
{
	int		dict_entry_count;
	int		dict_size;
	char	*buf;
	int		fd;
	char	***dict;

	dict_size = get_dict_size(dict_dir);
	buf = malloc(sizeof(char) * (dict_size + 1));
	dict_entry_count = 0;
	dict = get_dict(dict_dir);
	while (dict[dict_entry_count] != NULL)
		dict_entry_count++;
	free_dict(dict);
	fd = open(dict_dir, O_RDONLY);
	read(fd, buf, dict_size);
	close(fd);
	if (dict_entry_count == buf_scan(buf))
	{
		free(buf);
		return (1);
	}
	free(buf);
	return (0);
}

int	valid_dict_nums(char *dict_dir)
{
	char	***dict;
	int		i;

	i = 0;
	dict = get_dict(dict_dir);
	while (dict[i] != NULL)
	{
		if (!str_is_numeric(dict[i][0]))
		{
			free_dict(dict);
			return (0);
		}
		i++;
	}
	free_dict(dict);
	return (1);
}

int	valid_max_value(char *dict_dir, int arg_count, char **arg_value, int i)
{
	int		size;
	char	**nums;
	char	***dict;

	if (arg_count == 2)
		nums = parse_num(arg_value[1], ft_strlen(arg_value[1]));
	else
		nums = parse_num(arg_value[2], ft_strlen(arg_value[2]));
	while (nums[i] != NULL)
		i++;
	size = ((i - 1) * 3) + 1;
	dict = get_dict(dict_dir);
	i = 0;
	while (dict[i] != NULL)
	{
		if (ft_strlen(dict[i++][0]) == size)
		{
			free_dict(dict);
			free_nums(nums);
			return (1);
		}
	}
	free_dict(dict);
	free_nums(nums);
	return (0);
}

int	full_validity_check(char *dict_dir, int arg_count, char **arg_value)
{
	if (!valid_args(arg_count, arg_value))
		return (0);
	if (!valid_dict(dict_dir))
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (!valid_dict_nums(dict_dir))
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (!valid_max_value(dict_dir, arg_count, arg_value, 0))
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (arg_count == 3)
		if (!valid_new_dict(arg_value, 0, 0, 0))
			return (0);
	return (1);
}
