/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/13 18:16:19 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_space_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	else
		return (0);
}

int	is_valid_base(char *base_str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (base_str[i])
	{
		j = i + 1;
		if (base_str[i] == '+' || base_str[i] == '-' || !(base_str[i] >= 33
				&& base_str[i] <= 126))
			return (0);
		while (base_str[j])
		{
			if (base_str[i] == base_str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	base_digit(char c, char *base_str)
{
	size_t	i;

	i = 0;
	while (base_str[i] != c && base_str[i])
		i++;
	if (!base_str[i])
		return (-1);
	else
		return (i);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	len_nbr_base(long n, int base)
{
	size_t	len;

	len = (n <= 0);
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}
