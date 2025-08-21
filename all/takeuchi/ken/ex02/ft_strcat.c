/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:52:08 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 14:05:41 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "Hello, ";
	char	*src;

	src = "world!";
	printf("Input:\n");
	printf("dest = \"%s\"\n", dest);
	printf("src  = \"%s\"\n", src);
	ft_strcat(dest, src);
	printf("\nOutput:\n");
	printf("dest = \"%s\"\n", dest);
	return (0);
}
*/