/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:44:56 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/27 20:13:48 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	message;

	if (n >= 0)
		message = 'P';
	else
		message = 'N';
	write(1, &message, 1);
}
/*
int	main(void)
{
	int	pos_value;
	int	neg_value;

	pos_value = 15;
	neg_value = -45;
	ft_is_negative(pos_value);
	ft_is_negative(neg_value);
}
*/