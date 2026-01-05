/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:10:07 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/04 22:37:12 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a') && (str[count] <= 'z'))
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
/* 
int	main(void)
{
	char test[] = "sdjbasdjkjkashjaFRGWERGERHsdfhj";
	printf("%s, %s", test, ft_strupcase(test));

	char test2[] = "DJGPHERIWEQdsjadhasjkhdasjkdhKPH";
	printf("%s, %s", test2, ft_strupcase(test2));

	return (0);
} */