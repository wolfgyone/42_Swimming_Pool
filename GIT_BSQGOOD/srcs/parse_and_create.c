/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 22:38:55 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_end_of_content(char *content, int i)
{
	while (content[i])
	{
		if (content[i] != '\n' && content[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int	validate_and_fill_line(char *content, t_map *map, int *i, int row)
{
	int	col;

	col = 0;
	while (content[*i] && content[*i] != '\n')
	{
		if (content[*i] != map->mpt_symbol && content[*i] != map->obs_symbol)
			return (0);
		if (col >= map->size_line)
			return (0);
		map->grid[row][col] = content[*i];
		col++;
		(*i)++;
	}
	if (col != map->size_line)
		return (0);
	map->grid[row][col] = '\0';
	if (content[*i] == '\n')
		(*i)++;
	return (1);
}

int	get_map_width(char *content, int start)
{
	int	width;

	width = 0;
	while (content[start + width] && content[start + width] != '\n')
		width++;
	return (width);
}

char	**allocate_grid(t_map *map)
{
	char	**grid;
	int		i;

	grid = malloc(sizeof(char *) * (map->nb_line + 1));
	if (!grid)
		return (NULL);
	i = 0;
	while (i < map->nb_line)
	{
		grid[i] = malloc(sizeof(char) * (map->size_line + 1));
		if (!grid[i])
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	grid[i] = NULL;
	return (grid);
}

char	**parse_and_create_grid(char *content, t_map *map, int start)
{
	int	i;
	int	row;

	map->size_line = get_map_width(content, start);
	if (map->size_line == 0)
		return (NULL);
	map->grid = allocate_grid(map);
	if (!map->grid)
		return (NULL);
	i = start;
	row = 0;
	while (row < map->nb_line && content[i])
	{
		if (!validate_and_fill_line(content, map, &i, row))
		{
			free_grid(map->grid, row + 1);
			map->grid = NULL;
			return (NULL);
		}
		row++;
	}
	if (row != map->nb_line || !check_end_of_content(content, i))
		return (free_grid(map->grid, map->nb_line), NULL);
	return (map->grid);
}
