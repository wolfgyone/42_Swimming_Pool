/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:55:30 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/03 21:45:02 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	pos_smallest(int *tab, int size)
{
	int	i;
	int	min_val;
	int	pos_min;

	i = 0;
	min_val = tab[0];
	pos_min = 0;
	while (i < size)
	{
		if (tab[i] < min_val)
		{
			min_val = tab[i];
			pos_min = i;
		}
		i++;
	}
	return (pos_min);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_pos;
	int	remaining_size;
	int	pos_to_replace;
	int	replace;

	current_pos = 0;
	while (current_pos < size)
	{
		remaining_size = size - current_pos;
		pos_to_replace = pos_smallest(&tab[current_pos], remaining_size)
			+ current_pos;
		if (pos_to_replace != current_pos)
		{
			replace = tab[current_pos];
			tab[current_pos] = tab[pos_to_replace];
			tab[pos_to_replace] = replace;
		}
		current_pos++;
	}
}
/*
int	main(void)
{
	int myIntArray[11] = {8, 3, 13, -24, 5, -35, 88, 6, 6, 3, 11};
	int array_size =11;
	int i=0;
	while (i < array_size)
		{
		printf(" %d ", myIntArray[i]);
		i++;
		}
	printf("\n");

	ft_sort_int_tab(myIntArray, array_size);

	i = 0;
	while (i < array_size)
		{
		int currentelement = myIntArray[i];
		printf(" %d ", currentelement);
		i++;
		}
	printf("\n");
}*/