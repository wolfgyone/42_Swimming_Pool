/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:15:23 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/09 22:17:06 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_dest_len(char *dest);

char			*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_dest_len(dest);
	while (dest[dest_len] != '\0')
		dest_len++;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

unsigned int	ft_dest_len(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* int main(void)
{
    char test1[50] = "Hello";
    char test2[50] = "Hello";
    char test3[50] = "Hello";
    char empty[50] = "";
    char buffer[50] = "Start: ";

    printf("---- BASIC TESTS ----\n");
    printf("Before: \"%s\"\n", test1);
    ft_strncat(test1, " World", 6);
    printf("After:  \"%s\"\n\n", test1);

    printf("---- LIMIT NB < SRC LENGTH ----\n");
    printf("Before: \"%s\"\n", test2);
    ft_strncat(test2, "ABCDE", 3);
    printf("After:  \"%s\"  (expected: HelloABC)\n\n", test2);

    printf("---- NB = 0 ----\n");
    printf("Before: \"%s\"\n", test3);
    ft_strncat(test3, "!!!!!!", 0);
    printf("After:  \"%s\"  (expected unchanged: Hello)\n\n", test3);

    printf("---- DEST INITIALLY EMPTY ----\n");
    printf("Before: \"%s\"\n", empty);
    ft_strncat(empty, "Testing", 10);
    printf("After:  \"%s\"\n\n", empty);

    printf("---- MULTIPLE CONCAT CALLS ----\n");
    printf("Before: \"%s\"\n", buffer);
    ft_strncat(buffer, "A", 1);
    ft_strncat(buffer, "B", 1);
    ft_strncat(buffer, "CDE", 3);
    printf("After:  \"%s\"  (expected: Start: ABCDE)\n\n", buffer);

    return 0;
} */
/* strncat(3)               Library Functions Manual              strncat(3)

NAME         top

		strncat - append non-null bytes from a source array to a string,
		and null-terminate the result

LIBRARY         top

		Standard C library (libc, -lc)

SYNOPSIS         top

		#include <string.h>

		char *strncat(size_t ssize;
						char *restrict dst, const char src[restrict ssize],
						size_t ssize);

DESCRIPTION         top

		This function appends at most ssize non-null bytes from the array
		pointed to by src, followed by a null character, to the end of the
		string pointed to by dst.  dst must point to a string contained in
		a buffer that is large enough, that is, the buffer size must be at
		least strlen(dst) + strnlen(src, ssize) + 1.

		An implementation of this function might be:

			char *
			strncat(char *restrict dst, const char *restrict src, size_t ssize)
			{
				#define strnul(s)  (s + strlen(s))

				stpcpy(mempcpy(strnul(dst), src, strnlen(src, ssize)), "");
				return (dst);
			}

RETURN VALUE         top

		strncat() returns dst.

ATTRIBUTES         top

		For an explanation of the terms used in this section, see
		attributes(7).
		┌──────────────────────────────────────┬───────────────┬─────────┐
		│ Interface                            │ Attribute     │ Value   │
		├──────────────────────────────────────┼───────────────┼─────────┤
		│ strncat()                            │ Thread safety │ MT-Safe │
		└──────────────────────────────────────┴───────────────┴─────────┘

STANDARDS         top

		C11, POSIX.1-2008.

HISTORY         top

		POSIX.1-2001, C89, SVr4, 4.3BSD.

CAVEATS         top

		The name of this function is confusing; it has no relation to
		strncpy(3).

		If the destination buffer does not already contain a string, or is
		not large enough, the behavior is undefined.  See _FORTIFY_SOURCE
		in feature_test_macros(7).

BUGS         top

		This function can be very inefficient.  Read about Shlemiel the
		painter
		⟨https://www.joelonsoftware.com/2001/12/11/back-to-basics/⟩.

EXAMPLES         top

		#include <err.h>
		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

		#define nitems(arr)  (sizeof((arr)) / sizeof((arr)[0]))

		int
		main(void)
		{
			size_t  n;

			// Null-padded fixed-size character sequences
			char    pre[4] = "pre.";
			char    new_post[50] = ".foo.bar";

			// Strings
			char    post[] = ".post";
			char    src[] = "some_long_body.post";
			char    *dest;

			n = nitems(pre) + strlen(src) - strlen(post) + nitems(new_post) + 1;
			dest = malloc(sizeof(*dest) * n);
			if (dest == NULL)
				err(EXIT_FAILURE, "malloc()");

			dest[0] = '\0';  // There's no 'cpy' function to this 'cat'.
			strncat(dest, pre, nitems(pre));
			strncat(dest, src, strlen(src) - strlen(post));
			strncat(dest, new_post, nitems(new_post));

			puts(dest);  // "pre.some_long_body.foo.bar"
			free(dest);
			exit(EXIT_SUCCESS);
		}
 */