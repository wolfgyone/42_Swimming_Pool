/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:09:56 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/04 22:30:43 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (!((str[count] >= 32) && (str[count] <= 127)))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/* int	main(void)
{
	char test[] = "sdjbasdjkjkashjasdfhj";
	printf("%s, %d", test, ft_str_is_printable(test));

	char test2[] = "DJGP\10HERIKPH";
	printf("%s, %d", test2, ft_str_is_printable(test2));
	return 0;
} */