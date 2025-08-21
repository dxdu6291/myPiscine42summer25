/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:17:27 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/17 19:26:27 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_dict_size(char *dict)
{
	char	buf[BUF_SIZE];
	int		total_read;
	int		bytes_read;
	int		fd;

	total_read = 0;
	bytes_read = BUF_SIZE;
	fd = open(dict, O_RDONLY);
	while (!(bytes_read < BUF_SIZE))
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		total_read += bytes_read;
	}
	close(fd);
	return (total_read);
}

int	buf_scan(char *buf)
{
	int	i;
	int	count;
	int	is_new_entry;

	i = 0;
	count = 0;
	is_new_entry = 1;
	while (buf[i])
	{
		if (buf[i] == '\n' && is_new_entry == 0)
			is_new_entry = 1;
		if (buf[i] != '\n' && is_new_entry)
		{
			is_new_entry = 0;
			count++;
		}
		i++;
	}
	return (count);
}
