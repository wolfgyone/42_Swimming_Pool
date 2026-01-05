/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:15:23 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/10 15:25:56 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int	main(void)
{
	char	dest[60] = "test test";
	char	src[] = "hello add";

	ft_strcat(dest, src);
	printf("string result is = %s\n ", dest);
	return (0);
}
 */
/* strcat(3p) — Linux manual page

STRCAT(3P)              POSIX Programmer's Manual              STRCAT(3P)

PROLOG         top

		This manual page is part of the POSIX Programmer's Manual.  The
		Linux implementation of this interface may differ (consult the
		corresponding Linux manual page for details of Linux behavior), or
		the interface may not be implemented on Linux.

NAME         top

		strcat — concatenate two strings

SYNOPSIS         top

		#include <string.h>

		char *strcat(char *restrict s1, const char *restrict s2);

DESCRIPTION         top

		The functionality described on this reference page is aligned with
		the ISO C standard. Any conflict between the requirements
		described here and the ISO C standard is unintentional. This
		volume of POSIX.1‐2017 defers to the ISO C standard.

		The strcat() function shall append a copy of the string pointed to
		by s2 (including the terminating NUL character) to the end of the
		string pointed to by s1.  The initial byte of s2 overwrites the
		NUL character at the end of s1.  If copying takes place between
		objects that overlap, the behavior is undefined.

RETURN VALUE         top

		The strcat() function shall return (s1); no return value is reserved
		to indicate an error.

ERRORS         top

		No errors are defined.

		The following sections are informative.
 */