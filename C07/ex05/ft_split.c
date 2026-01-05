/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/13 18:16:25 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	in_charset(char c, const char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i++])
			return (1);
	}
	return (0);
}

size_t	count_words(char *str, const char *charset)
{
	size_t	count;
	size_t	inword;

	count = 0;
	inword = 0;
	while (*str)
	{
		if (!in_charset(*str, charset) && !inword)
		{
			inword = 1;
			count++;
		}
		else if (in_charset(*str, charset))
			inword = 0;
		str++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	size_t	len;

	len = 0;
	while (str[len] && !in_charset(str[len], charset))
		len++;
	return (len);
}

char	*word_copy(char *str, size_t len)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	size_t	i;
	size_t	size;
	size_t	len;
	char	**res;

	i = 0;
	size = count_words(str, charset);
	res = malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	while (1)
	{
		while (*str && in_charset(*str, charset))
			str++;
		if (!*str)
			break ;
		len = word_len(str, charset);
		res[i] = word_copy(str, len);
		if (!res[i])
			return (NULL);
		str += len;
		i++;
	}
	res[size] = NULL;
	return (res);
}
