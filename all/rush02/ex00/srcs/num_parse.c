/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:25 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 20:58:11 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**parse_allocator(int len)
{
	char	**result;
	int		alloc_len;
	int		i;

	if (len % 3 == 0)
		alloc_len = (len / 3) + 1;
	else
		alloc_len = (len / 3) + 2;
	result = malloc(sizeof(char *) * (alloc_len + 1));
	i = 0;
	while (i < alloc_len - 1)
		result[i++] = malloc(sizeof(char) * 4);
	result[i] = NULL;
	return (result);
}

void	handle_first(char **result, int condition, char *num)
{
	if (condition == 0)
	{
		result[0][0] = '0';
		result[0][1] = '0';
		result[0][2] = *num++;
	}
	else if (condition == 1)
	{
		result[0][0] = '0';
		result[0][1] = *num++;
		result[0][2] = *num++;
	}
}

char	**parse_num(char *num, int len)
{
	char	**result;
	int		i;

	result = parse_allocator(len);
	i = 0;
	if ((len + 2) % 3 == 0)
	{
		handle_first(result, 0, num++);
		i = 1;
	}
	else if ((len + 1) % 3 == 0)
	{
		handle_first(result, 1, num);
		num += 2;
		i = 1;
	}
	while (result[i] != NULL)
	{
		result[i][0] = *num++;
		result[i][1] = *num++;
		result[i][2] = *num++;
		i++;
	}
	return (result);
}
