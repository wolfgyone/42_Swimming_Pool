/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/15 14:03:57 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (0);
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/* int	ft_atoi(char *str);
int	main(int argc, char *argv[])
{
	int	i = 0;
	int min=ft_atoi(argv[1]);
	int max=ft_atoi(argv[2]);

	int	*range = ft_range(min, max);
	int	size = max - min;

	printf("\ncmdline args count=%d", argc);
	printf("-----------------------------------\n");
	
	while (i < size)
	{
		printf(" %d *", range[i]);
		i++;
	}
	free(range);
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