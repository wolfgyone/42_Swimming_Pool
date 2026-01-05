/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 22:40:32 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	parse_number(char *content, int len)
{
	char	*nbr_str;
	int		result;
	int		i;

	if (len <= 0)
		return (-1);
	nbr_str = malloc(len + 1);
	if (!nbr_str)
		return (-1);
	i = -1;
	while (++i < len)
	{
		if (content[i] < '0' || content[i] > '9')
		{
			free(nbr_str);
			return (-1);
		}
		nbr_str[i] = content[i];
	}
	nbr_str[i] = '\0';
	result = ft_atoi_strict(nbr_str);
	free(nbr_str);
	return (result);
}

int	parse_header(char *content, t_map *map)
{
	int	i;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	if (i < 4 || content[i] != '\n')
		return (0);
	map->mpt_symbol = content[i - 3];
	map->obs_symbol = content[i - 2];
	map->ful_symbol = content[i - 1];
	if (map->mpt_symbol == map->obs_symbol
		|| map->mpt_symbol == map->ful_symbol
		|| map->obs_symbol == map->ful_symbol)
		return (0);
	if (!is_printable(map->mpt_symbol) || !is_printable(map->obs_symbol)
		|| !is_printable(map->ful_symbol))
		return (0);
	map->nb_line = parse_number(content, i - 3);
	if (map->nb_line <= 0)
		return (0);
	return (i + 1);
}

char	**grid(char *content, t_map *map)
{
	int	header_end;

	header_end = parse_header(content, map);
	if (!header_end)
	{
		print_maps_error();
		return (NULL);
	}
	map->grid = parse_and_create_grid(content, map, header_end);
	if (!map->grid)
	{
		print_maps_error();
		return (NULL);
	}
	return (map->grid);
}
