/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoares- <asoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:44:15 by asoares-          #+#    #+#             */
/*   Updated: 2025/08/17 20:30:25 by asoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_args(int argc, char **argv)
{
	int		i;
	int		aux;
	char	*temp;

	i = 1;
	while (i < (argc -1))
	{
		aux = ft_strcmp(argv[i], argv[i + 1]);
		if (aux > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i -= 1;
			if (i < 1)
				i = 1;
		}
		else
		{
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	sort_args(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
