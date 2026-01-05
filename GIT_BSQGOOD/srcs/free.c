/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 18:45:05 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_grid(char **grid, int nb_line)
{
	int	i;

	if (!grid)
		return ;
	i = 0;
	while (i < nb_line)
	{
		if (grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}

void	free_map(t_map *map)
{
	if (!map)
		return ;
	if (map->grid)
		free_grid(map->grid, map->nb_line);
}
