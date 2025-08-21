/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:33:23 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/21 19:03:09 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	number;
	int	*storage;

	if (min >= max)
	{
		return (NULL);
	}
	number = max - min;
	storage = malloc(number * sizeof(int));
	if (!storage)
		return (NULL);
	i = 0;
	while (i < number)
	{
		storage[i] = min + i;
		i++;
	}
	return (storage);
}
/*int main(int argc, char **argv)
{
	int	i = 0;
	
	int *arr;
	int storage;

	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	storage = atoi(argv[2]) - atoi(argv[1]);

	if (argc == 3)
	{
		while(i  < storage)
		{
			printf("%d\n", arr[i]);
			i++;
		}
	}
}*/
