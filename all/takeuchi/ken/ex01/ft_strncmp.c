/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:59:29 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 13:38:08 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((char)s1[i] - (char)s2[i]);
		}
		i++;
	}
	if (i < n && (s1[i] == '\0' || s2[i] == '\0'))
	{
		return ((char)s1[i] - (char)s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str1 = "hello";
	const char	*str2 = "HeLlo World";
	const char	*str3 = "hello world";
	const char	*str4 = "hello";

	printf("Test 1: Comparing \"%s\" and \"%s\" (n = 5)\n", str1, str2);
	printf("Result: %d\n\n", ft_strncmp(str1, str2, 5)); // Should be 0
	printf("Test 2: Comparing \"%s\" and \"%s\" (n = 11)\n", str1, str2);
	printf("Result: %d\n\n", ft_strncmp(str1, str2, 11)); // Should be > 0
	printf("Test 3: Comparing \"%s\" and \"%s\" (n = 11)\n", str1, str3);
	printf("Result: %d\n\n", ft_strncmp(str1, str3, 11)); // Should be < 0
	printf("Test 4: Comparing \"%s\" and \"%s\" (n = 5)\n", str1, str4);
	printf("Result: %d\n\n", ft_strncmp(str1, str4, 5)); // Should be 0
	return (0);
}
*/