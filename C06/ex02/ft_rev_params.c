/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:49:23 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/13 15:05:47 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	count_ac;
	int	i;

	count_ac = ac - 1;
	while (count_ac > 0)
	{
		i = 0;
		while (av[count_ac][i])
		{
			write(1, &av[count_ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count_ac--;
	}
	return (0);
}
