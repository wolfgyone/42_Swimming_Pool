/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:53:05 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/10 21:09:32 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*int	main(void)
{
	int test;
	test = ft_strlen("1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	printf("1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	printf("size is normally 10+26 = %d", test);
	return (0);
}*/
