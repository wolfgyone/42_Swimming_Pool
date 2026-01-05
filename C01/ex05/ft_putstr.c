/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:52:03 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/03 16:58:12 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
/*
int	main(void)
{
	// char mychar[25] ="dsajdhsajdhasdhasoi";
	ft_putstr("ABCEDKLKLKLDKEKDEdedDDDd");
	ft_putstr("\n");
	return (0);
}*/
