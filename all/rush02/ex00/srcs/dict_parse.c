/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:08:06 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 19:31:56 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**get_dict_element(char **p_buf, char **line)
{
	int		i;
	char	*buf;

	buf = *p_buf;
	i = 0;
	while (buf[i] > ' ' && buf[i] < 127 && buf[i] != ':')
		i++;
	line[0] = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*buf > ' ' && *buf < 127 && *buf != ':')
		line[0][i++] = *(buf++);
	line[0][i] = '\0';
	while (*buf <= ' ' || *buf == ':')
		buf++;
	i = 0;
	while (buf[i] != '\n')
		i++;
	line[1] = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*buf != '\n')
		line[1][i++] = *(buf++);
	line[1][i] = '\0';
	buf++;
	*p_buf = buf;
	return (line);
}

char	***parse_dict(int fd, int dict_size, int i)
{
	char	***result;
	char	*buf;
	char	*original_buf;
	int		entry_count;

	buf = malloc(sizeof(char) * (dict_size + 1));
	original_buf = buf;
	read(fd, buf, dict_size);
	buf[dict_size] = '\0';
	entry_count = buf_scan(buf);
	result = malloc(sizeof(char *) * (entry_count + 1));
	while (i < entry_count)
	{
		if (*buf != '\n')
		{
			result[i] = malloc(sizeof(char *) * 2);
			result[i] = get_dict_element(&buf, result[i]);
			i++;
		}
		else
			buf++;
	}
	result[i] = NULL;
	free(original_buf);
	return (result);
}

char	***get_dict(char *dict)
{
	char	***result;
	int		fd;
	int		dict_size;

	dict_size = get_dict_size(dict);
	fd = open(dict, O_RDONLY);
	result = parse_dict(fd, dict_size, 0);
	close(fd);
	return (result);
}
