/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 22:33:49 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**allocate_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = malloc(sizeof(int *) * rows);
	if (!dp)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		dp[i] = malloc(sizeof(int) * cols);
		if (!dp[i])
		{
			while (--i >= 0)
				free(dp[i]);
			free(dp);
			return (NULL);
		}
		i++;
	}
	return (dp);
}

void	free_dp(int **dp, int rows)
{
	int	i;

	if (!dp)
		return ;
	i = 0;
	while (i < rows)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
}

int	get_min_of_three(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	init_first_line(t_map *map, int **dp, t_sol *best)
{
	int	i;

	i = 0;
	while (i < map->size_line)
	{
		if (map->grid[0][i] == map-> mpt_symbol)
			dp[0][i] = 1;
		else
			dp[0][i] = 0;
		if (dp[0][i] > best->side)
		{
			best->side = 1;
			best->x = 0;
			best->y = i;
		}
		i++;
	}
}

void	init_first_col(t_map *map, int **dp, t_sol *best)
{
	int	i;

	i = 1;
	while (i < map->nb_line)
	{
		if (map->grid[i][0] == map->mpt_symbol)
			dp[i][0] = 1;
		else
			dp[i][0] = 0;
		if (dp[i][0] > best->side && best->side == 0)
		{
			best->side = 1;
			best->x = i;
			best->y = 0;
		}
		i++;
	}
}
