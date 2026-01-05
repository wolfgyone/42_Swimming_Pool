/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:18:21 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/27 15:39:33 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c); //function declaration
/*
int	main(void) //main method with invokation of ft_putchar() 
{
	ft_putchar('a');
	return (0);
}
*/

//function defintion
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
