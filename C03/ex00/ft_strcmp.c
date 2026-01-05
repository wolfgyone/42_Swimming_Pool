/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:03:15 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/09 20:33:15 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/* int main()
{
int res1;
int res2;

char a[]="source";
char b[]="source dest";
char c[]="source";

printf("before DEST :%s, SRC: %s \n", a, b);
res1 = ft_strcmp(a, b);
res2 = ft_strcmp(a, c);

printf("different DEST :%s, SRC: %s returned %d \n", a, b, res1);
printf("same      DEST :%s, SRC: %s returned %d \n", a, c, res2);
} */

/* SYNOPSIS         top

		#include <string.h>

		int strcmp(const char *s1, const char *s2);
		int strncmp(size_t n;
					const char s1[n], const char s2[n], size_t n);

DESCRIPTION         top

		The strcmp() function compares the two strings s1 and s2.  The
		locale is not taken into account (for a locale-aware comparison,
		see strcoll(3)).  The comparison is done using unsigned
		characters.

		strcmp() returns an integer indicating the result of the
		comparison, as follows:

		•  0, if the s1 and s2 are equal;

		•  a negative value if s1 is less than s2;

		•  a positive value if s1 is greater than s2.

		The strncmp() function is similar, except it compares only the
		first (at most) n bytes of s1 and s2.

RETURN VALUE         top

		The strcmp() and strncmp() functions return an integer less than,
		equal to, or greater than zero if s1 (or the first n bytes
		thereof) is found, respectively, to be less than, to match, or be
		greater than s2.

ATTRIBUTES         top

		For an explanation of the terms used in this section, see
		attributes(7).
		┌──────────────────────────────────────┬───────────────┬─────────┐
		│ Interface                            │ Attribute     │ Value   │
		├──────────────────────────────────────┼───────────────┼─────────┤
		│ strcmp(), strncmp()                  │ Thread safety │ MT-Safe │
		└──────────────────────────────────────┴───────────────┴─────────┘
 */
