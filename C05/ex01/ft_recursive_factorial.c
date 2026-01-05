/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:44:48 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/11 19:00:35 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*

int	ft_atoi(char *str);
int	main(int argc, char *argv[])
{
int	nbr;

printf("\ncmdline args count=%d", argc);
nbr=ft_atoi(argv[1]);
printf("result for %s ! is %d",argv[1], ft_recursive_factorial(nbr));
return(0);
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
