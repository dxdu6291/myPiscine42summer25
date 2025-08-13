/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:09:53 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/11 22:15:08 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
	char *str = "pastel de nata";
	int lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\n Lenght:%d", str, lenght);
}*/
