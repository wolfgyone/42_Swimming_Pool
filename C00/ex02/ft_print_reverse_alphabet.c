/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:37:44 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/27 18:06:39 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
void	ft_print_reverse_alphabet(void)
{
	char	where_current;
	char	where_end;

	where_current = 'z';
	where_end = 'a';
	while (where_current >= where_end)
	{
		write(1, &where_current, 1);
		where_current--;
	}
}
