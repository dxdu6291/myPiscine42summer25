/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:34:50 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/20 20:34:51 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	storage;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	storage = max - min;
	arr = malloc(sizeof(int) * storage);
	if (arr == 0)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (storage);
}
/*int main(int argc, char **argv)
{
	int *range;
	int size;
	int i = 0;

	if (argc != 3)
	{
		return(-1);
	}
	size = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));

	while(i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return(0);
}*/
