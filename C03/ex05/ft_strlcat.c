/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:15:23 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/10 11:51:39 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_dest_len(char *dest, unsigned int size);
unsigned int	ft_src_len(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	to_fill;
	unsigned int	expected_len;

	i = 0;
	dest_len = ft_dest_len(dest, size);
	src_len = ft_src_len(src);
	to_fill = size - dest_len - 1;
	expected_len = dest_len + src_len;
	if (size == 0)
		return (src_len);
	else if (dest_len >= size)
		return (size + src_len);
	while ((src[i] != '\0') && (to_fill != 0))
	{
		dest[dest_len + i] = src[i];
		i++;
		to_fill--;
	}
	dest[dest_len + i] = '\0';
	return (expected_len);
}

unsigned int	ft_dest_len(char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((dest[i] != '\0') && (i < size))
	{
		i++;
	}
	return (i);
}

unsigned int	ft_src_len(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* int main(void)
{
    char dest1[20] = "Hello";
    char dest2[20] = "Hello";
    char dest3[20] = "Hello";
    char dest4[20] = "Hello";
    char dest5[5]  = "Hell";  // dest_len >= size
    char dest6[20] = "";
    char dest7[20] = "Hi";

    printf("=== TEST 1 : size larger than dest ===\n");
    printf("Before : \"%s\"\n", dest1);
    unsigned int ret1 = ft_strlcat(dest1, " World", 20);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest1, ret1);

    printf("=== TEST 2 : size too small to append ===\n");
    printf("Before : \"%s\"\n", dest2);
    unsigned int ret2 = ft_strlcat(dest2, " WORLD", 8);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest2, ret2);

    printf("=== TEST 3 : size = 0 ===\n");
    printf("Before : \"%s\"\n", dest3);
    unsigned int ret3 = ft_strlcat(dest3, " WORLD", 0);
    printf("After  : \"%s\"  (ret = %u)  
	(expected: unchanged)\n\n", dest3, ret3);

    printf("=== TEST 4 : src empty ===\n");
    printf("Before : \"%s\"\n", dest4);
    unsigned int ret4 = ft_strlcat(dest4, "", 20);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest4, ret4);

    printf("=== TEST 5 : dest_len >= size ===\n");
    printf("Before : \"%s\" (size = 3)\n", dest5);
    unsigned int ret5 = ft_strlcat(dest5, "X", 3);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest5, ret5);

    printf("=== TEST 6 : dest empty ===\n");
    printf("Before : \"%s\"\n", dest6);
    unsigned int ret6 = ft_strlcat(dest6, "Hello", 20);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest6, ret6);

    printf("=== TEST 7 : very small size ===\n");
    printf("Before : \"%s\"\n", dest7);
    unsigned int ret7 = ft_strlcat(dest7, " there!", 3);
    printf("After  : \"%s\"  (ret = %u)\n\n", dest7, ret7);

    return 0;
} */

/*   strlcat(3bsd)
				Copy and catenate the input string into a destination
				string.  If the destination buffer, limited by its size,
				isn't large enough to hold the copy, the resulting string
				is truncated (but it is guaranteed to be null-terminated).
				They return the length of the total string they tried to
				create.

				Check BUGS before using these functions.

				strtcpy() and stpecpy() are better alternatives to these
				functions.
 */