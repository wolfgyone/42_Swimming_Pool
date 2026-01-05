/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/15 14:01:24 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	length = 0;
	while (src[length])
		length++;
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(int argc, char *argv[])
{
	char *src = argv[1];
	
	char *dest = ft_strdup(src);
	
	printf("\ncmdline args count=%d", argc);
	printf("-----------------------------------\n");

	printf("ft_strdup result     : %s\n", ft_strdup(src));
	printf("compares with strdup : %s\n", strdup(src));

	free(dest);
} */

/* STRDUP(3)      Linux Programmer's Manual           STRDUP(3)

NAME
       strdup, strndup, strdupa, strndupa - duplicate a string

SYNOPSIS
       #include <string.h>

       char *strdup(const char *s);

       char *strndup(const char *s, size_t n);
       char *strdupa(const char *s);
       char *strndupa(const char *s, size_t n);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       strdup():
           _XOPEN_SOURCE >= 500
               ||  Since glibc 2.12:  _POSIX_C_SOURCE >= 200809L
               ||  Glibc versions <= 2.19:  _BSD_SOURCE || _SVID_SOURCE
       strndup():
           Since glibc 2.10:
               _POSIX_C_SOURCE >= 200809L
           Before glibc 2.10:
               _GNU_SOURCE
       strdupa(), strndupa(): _GNU_SOURCE

DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is
       longer than n, only n bytes are copied, and  a  terminating  null  byte
       ('\0') is added.

       strdupa() and strndupa() are similar, but use alloca(3) to allocate the
       buffer.  They are available only when using the GNU GCC suite, and suf‐
       fer from the same limitations described in alloca(3).

RETURN VALUE
       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.
ERRORS
       ENOMEM Insufficient memory available to allocate duplicate string.
ATTRIBUTES
       For  an  explanation  of  the  terms  used  in  this  section,  see at‐
       tributes(7).

       ┌────────────────────────────────┬───────────────┬─────────┐
       │Interface                       │ Attribute     │ Value   │
       ├────────────────────────────────┼───────────────┼─────────┤
       │strdup(), strndup(), strdupa(), │ Thread safety │ MT-Safe │
       │strndupa()                      │               │         │
       └────────────────────────────────┴───────────────┴─────────┘

CONFORMING TO
       strdup() conforms to SVr4, 4.3BSD, POSIX.1-2001.  strndup() conforms to
       POSIX.1-2008.  strdupa() and strndupa() are GNU extensions.

SEE ALSO
       alloca(3),  calloc(3),  free(3), malloc(3), realloc(3), string(3), wcs‐
       dup(3)

COLOPHON
       This page is part of release 5.10 of the Linux  man-pages  project.   A
       description  of  the project, information about reporting bugs, and the
       latest    version    of    this    page,    can     be     found     at
       https://www.kernel.org/doc/man-pages/.
 */