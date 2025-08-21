/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:19:48 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 20:19:12 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((char)*s1 - (char)*s2);
}
/*
int	main(void)
{
	int		result;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "42Lisboa";
	str2 = "42Lisboa";
	str3 = "44Lisboa";
	str4 = "39Lisboa";
	result = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(str1, str3);
	printf("ft_strcmp(str1, str3) = %d\n", result);
	result = ft_strcmp(str1, str4);
	printf("ft_strcmp(str1, str4) = %d\n", result);
	return (0);
}
*/