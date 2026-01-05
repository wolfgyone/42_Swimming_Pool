/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:44:55 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/11 19:00:51 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	while (nb >= 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*
int	ft_atoi(char *str);
int	main(int argc, char *argv[])
{
int	nbr;

printf("\ncmdline args count=%d", argc);
nbr=ft_atoi(argv[1]);
printf("result for %s ! is %d",argv[1], ft_iterative_factorial(nbr));
return(0);
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