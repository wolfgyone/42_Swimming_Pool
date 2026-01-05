/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 16:31:24 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	process_map(char *str)
{
	t_map	map;
	t_sol	solution;

	if (!str)
	{
		print_maps_error();
		return ;
	}
	map.grid = NULL;
	map.nb_line = 0;
	if (grid(str, &map) == NULL)
	{
		free(str);
		free_map(&map);
		return ;
	}
	solution = find_biggest_square(&map);
	fill_square(&map, solution);
	print_map(&map);
	free(str);
	free_map(&map);
}

int	main(int ac, char **av)
{
	char	*str;
	int		i;

	if (ac == 1)
	{
		str = read_stdin();
		process_map(str);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			str = read_map(av[i]);
			process_map(str);
			if (i < ac - 1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
