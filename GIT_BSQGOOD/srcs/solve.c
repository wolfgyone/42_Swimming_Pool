/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 22:32:58 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_best_solution(int **dp, int x, int y, t_sol *best)
{
	dp[x][y] = get_min_of_three(dp[x - 1][y], dp[x][y - 1], dp[x - 1][y - 1])
		+ 1;
	if (dp[x][y] > best->side)
	{
		best->side = dp[x][y];
		best->x = x - best->side + 1;
		best->y = y - best->side + 1;
	}
}

void	fill_dp_table(t_map *map, int **dp, t_sol *best)
{
	int	x;
	int	y;

	x = 1;
	while (x < map->nb_line)
	{
		y = 1;
		while (y < map->size_line)
		{
			if (map->grid[x][y] == map->obs_symbol)
				dp[x][y] = 0;
			else
				update_best_solution(dp, x, y, best);
			y++;
		}
		x++;
	}
}

t_sol	find_biggest_square(t_map *map)
{
	int		**dp;
	t_sol	best;

	best.x = 0;
	best.y = 0;
	best.side = 0;
	dp = allocate_dp(map->nb_line, map->size_line);
	if (!dp)
		return (best);
	init_first_line(map, dp, &best);
	init_first_col(map, dp, &best);
	fill_dp_table(map, dp, &best);
	free_dp(dp, map->nb_line);
	return (best);
}

void	fill_square(t_map *map, t_sol sol)
{
	int	x;
	int	y;

	x = sol.x;
	while (x < sol.x + sol.side)
	{
		y = sol.y;
		while (y < sol.y + sol.side)
		{
			map->grid[x][y] = map->ful_symbol;
			y++;
		}
		x++;
	}
}
