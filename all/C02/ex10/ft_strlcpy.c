/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:09:11 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/20 00:42:56 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j] != '\0')
	{
		if (size != 0)
		{
			i = 0;
			while (i < size -1 && src[i] != '\0')
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		j++;
	}
	return (j);
}
