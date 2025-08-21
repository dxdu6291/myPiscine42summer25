/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakeu <kentakeu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:25:14 by kentakeu          #+#    #+#             */
/*   Updated: 2025/08/13 16:40:53 by kentakeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	compare(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] && compare(&str[i], to_find))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*text;
	int		i;
	char	*result;
	char	*tests[100];

	text = "Your exercises will be evaluated by a program called Moulinette.";
	tests[0] = "Your";
	tests[1] = "Moulinette";
	tests[2] = "Norminette";
	tests[3] = "eval";
	tests[4] = "gram";
	tests[5] = "";
	tests[6] = NULL;
	i = 0;
	while (tests[i] != NULL)
	{
		result = ft_strstr(text, tests[i]);
		if (result)
			printf("Searching for \"%s\": Found \"%s\"\n", tests[i], result);
		else
			printf("Searching for \"%s\": Not found\n", tests[i]);
		i++;
	}
	return (0);
}
*/