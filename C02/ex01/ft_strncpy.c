/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:04:38 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/11 13:34:41 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while(i < n && src[i] !='\0')
	{
		dest[i] =  src[i];
		i++;
	}
	while(i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}