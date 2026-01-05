/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:09:20 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/27 19:34:15 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	where_current;
	char	where_end;

	where_current = '0';
	where_end = '9';
	while (where_current <= where_end)
	{
		write(1, &where_current, 1);
		where_current++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
}
*/