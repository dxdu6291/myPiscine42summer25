/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 07:59:51 by rlaurean          #+#    #+#             */
/*   Updated: 2025/08/19 19:06:28 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_leng(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
		leng++;
	return (leng);
}

char	*ft_copy(char *str)
{
	char	*copy;
	int		leng;
	int		pos;

	leng = ft_leng(str);
	copy = malloc((leng + 1) * 24);
	pos = 0;
	if (!copy)
		return (NULL);
	while (str[pos] != '\0')
	{
		copy[pos] = str[pos];
		pos++;
	}
	copy[pos] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*objects;
	int			pos;

	objects = malloc((ac + 1) * 24);
	if (!objects)
		return (NULL);
	pos = 0;
	while (pos < ac)
	{
		objects[pos].size = ft_leng(av[pos]);
		objects[pos].str = av[pos];
		objects[pos].copy = ft_copy(av[pos]);
		pos++;
	}
	objects[pos].size = 0;
	objects[pos].str = 0;
	objects[pos].copy = 0;
	return (objects);
}

int	main(void)
{
	char	*strs[] = {"42lis" , "examshell", "teste", "ultima"};
	t_stock_str	*objects;
	int	pos;
	
	pos = 0;
	objects = ft_strs_to_tab(4, strs);

	while (pos < 5)
	{
		printf("size:%d, ", objects[pos].size);
		printf("str:%s, ", objects[pos].str);
		printf("copy:%s\n", objects[pos].copy);
		pos++;
	}
	pos = 0;
	while (pos < 5)
	{
		free(objects[pos].copy);
		pos++;
	}
	free(objects);
	return (0);
}
