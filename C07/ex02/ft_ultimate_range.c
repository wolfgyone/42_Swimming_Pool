/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/16 05:49:27 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
}

/* int	ft_atoi(char *str);
int	main(int argc, char *argv[])
{
	int	i = 0;

	int *my_range=NULL;
	
	int min=ft_atoi(argv[1]);
	int max=ft_atoi(argv[2]);

	int	size = ft_ultimate_range(&my_range, min, max);

	printf("\ncmdline args count=%d", argc);
	printf("-----------------------------------\n");
	printf("\nmy_range Size: %d\n", ft_ultimate_range(&my_range, min, max));

	while (i < size)
	{
		printf("%d *", my_range[i]);
		i++;
	}
	free(my_range);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	minus;

	i = 0;int ft_iterative_power(int nb, int power);
	number = 0;
	minus = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (((str[i] == '-') || (str[i] == '+')) && (str[i] != '\0'))
	{
		if (str[i] == '-')
			minus *= (-1);
		i++;
	}
	while ((str[i] != '\0') && ((str[i] >= 48 && str[i] <= 57)))
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number * minus);
} */
