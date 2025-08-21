/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:53:26 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/10 20:43:49 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	get_visibility(int *line, int n);

int	is_valid(int **grid, int n, int row, int col, int num);

int	get_visible(int *line, int n)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < n)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

int	check_all_clues(int **grid, int *clues, int n)
{
	int	line[n];
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			line[j] = grid[j][i];
			j++;
		}
		if (clues[i] != 0 && get_visible(line, n) != clues[i])
			return (0);
		j = 0;
		while (j < n)
		{
			line[j] = grid[n - 1 - j][i];
			j++;
		}
		if (clues[n + i] != 0 && get_visible(line, n) != clues[n + i])
			return (0);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n){
			line[j] = grid[i][j];
			j++;
		}
		if (clues[2 * n + i] != 0 && get_visible(line, n) != clues[2 * n + i])
			return(0);
		j = 0;
		while (j < n)
		{
			line[j] = grid[i][n - 1 - j];
			j++;
		}
		if (clues[3 * n + i] != 0 && get_visible(line, n) != clues[3 * n + i])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(int **grid, int n, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
