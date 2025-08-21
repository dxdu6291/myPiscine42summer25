/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:54:21 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 20:24:15 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < (int)nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			dest[100] = "Hello, ";
	char			src[100] = "world!";
	unsigned int	nb;

	nb = 20;
	printf("Input:\n");
	printf("dest = \"%s\"\n", dest);
	printf("src  = \"%s\"\n", src);
	ft_strncat(dest, src, nb);
	printf("\nOutput:\n");
	printf("dest = \"%s\"\n", dest);
	return (0);
}
*/