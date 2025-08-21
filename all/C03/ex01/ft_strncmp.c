/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:47:39 by ande-sou          #+#    #+#             */
/*   Updated: 2025/08/20 15:56:41 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i] || s1[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
