/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:10:15 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/10 21:18:18 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	print_grid(int **grid, int n);
int		*parse_clues(char *arg, int *clue_count);
int		solve(int **grid, int *clues, int n, int pos);
int		initialize_game(int argc, char **argv, int **clues_ptr, int *n_ptr);

int	**create_grid(int n)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(sizeof(int *) * n);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < n)
	{
		grid[i] = (int *)malloc(sizeof(int) * n);
		if (!grid[i])
		{

			while (i > 0)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < n)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	initialize_game(int argc, char **argv, int **clues_ptr, int *n_ptr)
{
	int	clue_count;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	*clues_ptr = parse_clues(argv[1], &clue_count);
	if (!(*clues_ptr))
	{
		ft_putstr("Error\n");
		return (0);
	}
	*n_ptr = clue_count / 4;
	return (1);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	*clues;
	int	n;
	int	i;

	if (!initialize_game(argc, argv, &clues, &n))
		return (1);
	grid = create_grid(n);
	if (!grid)
		return (1);
	if (solve(grid, clues, n, 0))
		print_grid(grid, n);
	else
		ft_putstr("Erro\n");
	i = 0;
	while (i < n)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(clues);
	return (0);
}