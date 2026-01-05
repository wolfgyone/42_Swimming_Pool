/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:09:45 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 13:46:29 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(((str[count] >= 'a') && (str[count] <= 'z'))
				|| ((str[count]) >= 'A' && (str[count] <= 'Z'))))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*
int	main(void)
{
	char test[] = "tDFSDFDSDFSDSFest";
	printf("%s, %d", test, ft_str_is_alpha(test));
} */
