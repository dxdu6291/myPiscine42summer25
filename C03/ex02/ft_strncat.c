/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:45:45 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/11 13:29:19 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strncat(char *dest, const char *src, size_t n)
{
	unsigned int	dest_len ;
	unsigned int	i;

	i = 0;
	dest_len = 0;
	while(dest[dest_len])
	dest_len++;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + 1] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}