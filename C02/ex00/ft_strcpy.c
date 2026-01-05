/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:09:24 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 13:42:53 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()
{
char* a;
char	my_dest[] 	= "                                   ";
char my_source[] ="BSLDASDKASBDLKASJKJSLKASdasdjasdjas";

printf("my source string : %s",my_source);
printf("my dest string : %s", my_dest);
printf("==============================");

a=ft_strcpy(my_dest, my_source);

printf("my source string : %s", my_source);
printf("my dest string : %s", my_dest);
return (0);
}*/