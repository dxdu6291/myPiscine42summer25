/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:20:10 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 17:38:39 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (dest_len == size)
	{
		while (src[src_len])
			src_len++;
		return (size + src_len);
	}
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	while (src[i])
		i++;
	return (dest_len + i);
}
/*
int	main(void)
{
	char			buffer[20] = "Hello";
	char			*to_append;
	unsigned int	result;

	to_append = " World!";
	result = ft_strlcat(buffer, to_append, sizeof(buffer));
	printf("Resulting string: '%s'\n", buffer);
	printf("Total length: %u\n", result);
	return (0);
}
*/