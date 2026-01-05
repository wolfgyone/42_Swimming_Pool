/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 18:45:40 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_same(char a, char b, char c)
{
	if (a != b && a != c && b != c)
		return (0);
	return (1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_strict(char *str)
{
	int	i;
	int	n;
	int	len;

	len = ft_strlen(str);
	if (len == 0)
		return (-1);
	n = 0;
	i = 0;
	while (i < len)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (n <= 0)
		return (-1);
	return (n);
}
