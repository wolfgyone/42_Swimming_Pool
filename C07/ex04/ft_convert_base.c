/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:45:01 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/13 18:16:02 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		is_valid_base(char *base_str);
size_t	ft_strlen(char *str);
size_t	len_nbr_base(long n, int base);
int		base_digit(char c, char *base_str);
int		is_space_char(char c);

int	ft_atoi_base(char *str, char *base_str)
{
	int				sign;
	int				num;
	unsigned int	base;

	sign = 1;
	num = 0;
	base = 0;
	base = ft_strlen(base_str);
	while (is_space_char(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (base_digit(*str, base_str) != -1)
	{
		num = num * base + base_digit(*str, base_str);
		str++;
	}
	return (num * sign);
}

char	*ft_numtostr_base(int n, char *base_str)
{
	int		base;
	int		len;
	long	nl;
	char	*res;

	nl = n;
	base = ft_strlen(base_str);
	len = len_nbr_base(nl, base);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nl < 0)
	{
		res[0] = '-';
		nl = -nl;
	}
	if (nl == 0)
		res[0] = base_str[0];
	while (nl)
	{
		res[--len] = base_str[nl % base];
		nl /= base;
	}
	return (res);
}

char	*ft_convert_base(char *nbr_str, char *base_from, char *base_to)
{
	int	nbr;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	nbr = ft_atoi_base(nbr_str, base_from);
	return (ft_numtostr_base(nbr, base_to));
}
