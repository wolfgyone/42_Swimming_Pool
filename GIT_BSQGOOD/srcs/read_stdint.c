/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 18:45:30 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	*realloc_buffer(char *buffer, int old_size, int new_size)
{
	char	*new_buffer;
	int		i;

	new_buffer = malloc(new_size);
	if (!new_buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (i < old_size)
	{
		new_buffer[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (new_buffer);
}

char	*read_stdin(void)
{
	char	*buffer;
	int		total;
	int		ret;
	int		capacity;

	capacity = 1024;
	total = 0;
	buffer = malloc(capacity);
	if (!buffer)
		return (NULL);
	ret = read(0, buffer + total, 1024);
	while (ret > 0)
	{
		total += ret;
		if (total + 1024 > capacity)
		{
			capacity *= 2;
			buffer = realloc_buffer(buffer, total, capacity);
			if (!buffer)
				return (NULL);
		}
		ret = read(0, buffer + total, 1024);
	}
	buffer[total] = '\0';
	return (buffer);
}
