/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:13 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/11 20:38:10 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int numb)
{
	int	i;

	if (numb <= 1)
		return (0);
	i = 2;
	while (i < numb)
	{
		if (numb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int number;
	if (argc < 2)
	{
		printf("Usage : %s <nombre>\n", argv[0]);
		return (1);
	}
	number = ft_atoi(argv[1]);
	printf(" %d est premier si je suis 1 si 0 non %d\n", 
	number, ft_is_prime(number));
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
} */