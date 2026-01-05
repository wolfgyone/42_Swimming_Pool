/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:52:11 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/04 23:19:28 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	current;
	int	keep_value;

	current = 0;
	while (current < size / 2)
	{
		keep_value = tab[size - 1 - current];
		tab[size - 1 - current] = tab[current];
		tab[current] = keep_value;
		current++;
	}
}
/*
int	main(void)
{
    int myIntArray[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int array_size =11;
    int i=0;
    while (i < array_size)
      {
        int currentelement = myIntArray[i];
		printf("A %d :", currentelement);
        i++;
      }
    printf("\n");

    ft_rev_int_tab(myIntArray, array_size);
    
    i = 0;
    while (i < array_size)
      {
        int currentelement = myIntArray[i];
		printf("B %d :", currentelement);
        i++;
      }
    printf("\n");
}*/
