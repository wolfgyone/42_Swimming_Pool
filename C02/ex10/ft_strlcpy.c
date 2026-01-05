/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:10:21 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 16:20:41 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_src_len(char *src)
{
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	return (src_len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_src_len(src);
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
	return (src_len);
}
/* DESCRIPTION
	The strlcpy() and strlcat() functions copy and concatenate strings
	respectively.  They are designed to be safer,
	more consistent,
	and less error prone replacements for strncpy(3) and strncat(3).
	Unlike those functions,
	strlcpy() and strlcat() take the full size of the buffer (
	not just the length) and guarantee to NUL-terminate the
	result (as long as size is larger than 0 or, in the case of strlcat(),
	as long as there is at least one byte free
	in dst).  Note that a byte for the NUL should be included in size.
	Also note that strlcpy() and strlcat() only op‐
	erate on true “C” strings.  This means that for strlcpy() src must
	be NUL-terminated and for strlcat() both src and
	dst must be NUL-terminated.

	The strlcpy() function copies up to size
	- 1 characters from the NUL-terminated string src to dst,
	NUL-terminating
	the result.
*/