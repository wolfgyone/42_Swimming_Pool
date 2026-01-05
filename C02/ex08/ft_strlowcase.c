/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:10:07 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/04 22:37:15 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'A') && (str[count] <= 'Z'))
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
/* 
int	main(void)
{
	char test[] = "sdjbasdjkjkashGEFGDFGWERGERHsdfhj";
	printf("%s, %s", test, ft_strlowcase(test));

	char test2[] = "DJGPHERIWEQdsjadhasjkhdasjkdhKPH";
	printf("%s, %s", test2, ft_strlowcase(test2));

	return (0);
} */