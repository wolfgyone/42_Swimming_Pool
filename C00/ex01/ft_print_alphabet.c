/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:58:37 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/28 11:48:25 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
/*
int	main(void)
{
	ft_print_alphabet();
}*/
/*
	candidate solution
void	ft_print_alphabet(void)
{
	write(1, &"abcdefghijklmnop", 26);
}
*/	

void	ft_print_alphabet(void)
{
	char	where_current;
	char	where_end;

	where_current = 'a';
	where_end = 'z';
	while (where_current <= where_end)
	{
		write(1, &where_current, 1);
		where_current++;
	}
}
