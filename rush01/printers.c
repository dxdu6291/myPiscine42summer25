/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:55:50 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/11 12:22:40 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	print_grid(int **grid, int n);

int	*parse_clues(char *arg, int *clue_count);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	print_grid(int **grid, int n)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < n - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
int	*parse_clues(char *arg, int *clue_count)
{
	int	i;
	int	count;
	int	*clues;

	i = 0;
	count = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '9')
			count++;
		i++;
	}
	*clue_count = count;
	if (count % 4 != 0 || count == 0)
		return (NULL);
	clues = (int *)malloc(sizeof(int) * count);
	if (!clues)
		return (NULL);
	i = 0;
	count = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '9')
		{
			clues[count] = arg[i] - '0';
			count++;
		}
		i++;
	}
	return (clues);
}
