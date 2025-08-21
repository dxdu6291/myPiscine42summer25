/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:18:13 by victode-          #+#    #+#             */
/*   Updated: 2025/08/19 22:21:50 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
		if (str[i] && is_sep(str[i], charset) == 0)
		{
			count++;
			while (str[i] && is_sep(str[i], charset) == 0)
				i++;
		}
	}
	return (count);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		s;
	int		i;
	int		len;
	char	**split;

	s = 0;
	i = 0;
	if (!str)
		return (NULL);
	split = malloc(sizeof(char *) * (word_count(str, charset)) + 1);
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
		if (str[i] && is_sep(str[i], charset) == 0)
		{
			len = word_len(&str[i], charset);
			split[s++] = ft_strndup(&str[i], len);
			i += len;
		}
	}
	split[s] = NULL;
	return (split);
}

int main(void)
{
	char str[] = "  ;;;hello,, people::of  the,, world";
	char charset[] = ";,:";
	char **split = ft_split(str, charset);
	int i = 0;

	printf("String: \"%s\"\n\nCharset: \"%s\"\n\nSplit: ", str, charset);
	while (split[i])
	{
		printf("\"%s\", ", split[i]);
		free(split[i]);
		i++;
	}
	printf("\n");
	free(split);
	return (0);
}
