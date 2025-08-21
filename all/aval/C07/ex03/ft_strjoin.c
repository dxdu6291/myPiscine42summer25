/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:39:34 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/21 21:14:52 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	copy_str(char *dest, char *src, int jI)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[jI++] = src[i++];
	}
	return (jI);
}

void	ft_join(char *join, char **str, int size, char *sepa)
{
	int	i;
	int	join_index;

	i = 0;
	join_index = 0;
	while (i < size)
	{
		join_index = copy_str(join, str[i], join_index);
		if (i < size - 1)
			join_index = copy_str(join, sepa, join_index);
		i++;
	}
	join[join_index] = '\0';
}

int	count_chars(char **str, int size, char *sepa)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sepa[j] != '\0')
	{
		j++;
	}
	count += j * (size - 1);
	return (count);
}

char	*ft_strjoin(int size, char **str, char *sepa)
{
	char	*empty;
	int		total;
	char	*join;

	if (size == 0)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	total = count_chars(str, size, sepa);
	join = malloc(total + 1);
	ft_join(join, str, size, sepa);
	return (join);
}

int main(void)
{
    char *str[] = {"", "", ""};
    char *joined = ft_strjoin(0, str, "");
    printf("%s\n", joined);
    free(joined);
    return (0);
}
