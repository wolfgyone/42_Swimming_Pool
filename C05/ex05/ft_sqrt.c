/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:10 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/11 20:30:24 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	numb_size(int nb);
int	compatible_dim(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* int ft_sqrt(int nb)
{
	int	digits;
	int	challenge;
	int	side_min;
	int	d_size;
	int	number;
	int	number;

	side_min = 1;
	if (nb <= 0)
		return (0);
	digits = numb_size(nb);
	challenge = compatible_dim(digits);
	while (challenge--)
		side_min *= 10;
	while (side_min > 1 && (side_min - 1) * (side_min - 1) > nb)
		side_min--;
	while (side_min * side_min <= nb)
	{
		if (side_min * side_min == nb)
			return (side_min);
		side_min++;
	}
	return (0);
} */
/*
int	numb_size(int nb)
{
	d_size = 0;
 while (nb!=0)
 {
	nb=nb/10;
	d_size++;
 }
 return(d_size);
} */
/* int compatible_dim(int nb)
{
	if (numb_size(nb)%2 == 0)
		return(numb_size(nb)/2);
	else
		return((numb_size(nb)/2)+1);
} */
/* int	ft_atoi(char *str);
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage : %s <nombre>\n", argv[0]);
		return (1);
	}
	number = ft_atoi(argv[1]);
	printf("Racine carrée entière de %d : %d\n", number, ft_sqrt(number));
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	minus;

	i = 0;
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
}
 */