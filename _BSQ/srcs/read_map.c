/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 16:31:14 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_file_size(char *file_name)
{
	int		fd;
	int		ret;
	int		total;
	char	buffer[1024];

	total = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	ret = read(fd, buffer, 1024);
	while (ret > 0)
	{
		total += ret;
		ret = read(fd, buffer, 1024);
	}
	close(fd);
	return (total);
}

char	*read_file_content(char *file_name, int size)
{
	int		fd;
	char	*content;
	int		bytes_read;

	content = malloc(size + 1);
	if (!content)
		return (NULL);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		free(content);
		return (NULL);
	}
	bytes_read = read(fd, content, size);
	if (bytes_read != size)
	{
		free(content);
		close(fd);
		return (NULL);
	}
	content[size] = '\0';
	close(fd);
	return (content);
}

char	*read_map(char *file_name)
{
	int		size;
	char	*content;

	size = get_file_size(file_name);
	if (size == -1)
		return (NULL);
	content = read_file_content(file_name, size);
	return (content);
}
