/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:09:31 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 13:46:26 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
 int main ()
 {
 char* a;
 unsigned int my_n = 35;
 char my_dest[] = "                                   ";
 char my_source[] ="BSLDASDKASBDLKASJKJSLKASdasdjasdjas";

 printf("my source string : %s",my_source);
 printf("my dest string : %s", my_dest);
 printf("==============================");

 a=ft_strncpy(my_dest, my_source, my_n);

 printf("my source string : %s", my_source);
 printf("my dest string : %s", my_dest);
 return (0);
 }*/
/* he	strcpy(void) function copies the string pointed to by src,
		including the terminating null byte('\0'),
		to the buffer pointed to by dest.The strings may not overlap,
	and the destination string dest must be large enough to receive the
	copy.Beware of buffer overruns !(See BUGS.)

			The strncpy() function is similar,
	except that at most n bytes of src are copied.Warning : If there is no
		null byte among the first n bytes of src,
	the string placed in dest will not be null -
	termi‐ nated.

	If the length of src is less than n,
	strncpy() writes additional null bytes to dest to ensure that a total
		of n bytes are written.

	A simple implementation of strncpy() might be : */
/*
	char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
} */
