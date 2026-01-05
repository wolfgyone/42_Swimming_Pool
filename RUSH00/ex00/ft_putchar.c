/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:16:57 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/29 14:59:47 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c); //function declaration
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