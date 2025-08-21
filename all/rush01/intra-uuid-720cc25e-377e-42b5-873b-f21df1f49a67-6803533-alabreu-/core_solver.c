/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:08:52 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/10 21:02:23 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	check_all_clues(int **grid, int *clues, int n);

int	is_valid(int **grid, int n, int row, int col, int num);

int	solve(int **grid, int *clues, int n, int pos)
{
	int	row;
	int	col;
	int	k;

	if (pos == n * n)
	{
		return (check_all_clues(grid, clues, n));
	}
	row = pos / n;
	col = pos % n;
	k = 1;
	while (k <= n)
	{
		if (is_valid(grid, n, row, col, k))
		{
			grid[row][col] = k;
			if (solve(grid, clues, n, pos + 1))
			{
				return (1);
			}
			grid[row][col] = 0;
		}
		k++;
	}
	return (0);
}
