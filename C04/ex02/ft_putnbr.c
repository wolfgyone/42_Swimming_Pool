/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:53:11 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/10 23:07:30 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int numb)
{
	if (numb == INT_MIN)
	{
		write(1, "-2147483648", 11);
	}
	else if (numb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-numb);
	}
	else if (numb > 9)
	{
		ft_putnbr(numb / 10);
		ft_putnbr(numb % 10);
	}
	else
	{
		ft_putchar(numb + '0');
	}
}
/* int	main(void)
{

	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	return (0);
}  */