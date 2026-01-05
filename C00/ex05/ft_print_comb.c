/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:44:56 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/27 23:30:01 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}*/

void	ft_print_comb(void)
{
	char	decimal_2;
	char	decimal_1;
	char	decimal_0;

	decimal_2 = '0';
	while (decimal_2 <= '7')
	{
		decimal_1 = decimal_2 + 1;
		while (decimal_1 <= '8')
		{
			decimal_0 = decimal_1 + 1;
			while (decimal_0 <= '9')
			{
				write(1, &decimal_2, 1);
				write(1, &decimal_1, 1);
				write(1, &decimal_0, 1);
				if (decimal_2 != '7')
					write(1, ", ", 2);
				decimal_0++;
			}
			decimal_1++;
		}
		decimal_2++;
	}
}
