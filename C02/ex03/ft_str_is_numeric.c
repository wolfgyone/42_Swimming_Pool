/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:09:50 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 13:39:35 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= '0') && (str[count] <= '9')))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/* int	main(void)
{
	char test[] = "151165165165";
	printf("%s, %d", test, ft_str_is_numeric(test));

	char test2[] = "quarante-deux";
	printf("%s, %d", test2, ft_str_is_numeric(test2));
} */