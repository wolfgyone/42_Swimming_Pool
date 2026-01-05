/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:10:17 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/08 13:53:04 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next_up;

	i = 0;
	next_up = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (next_up == 1)
				str[i] -= 32;
			next_up = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			next_up = 0;
		}
		else
		{
			next_up = 1;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	mystr[] = " o u? 42words forty-two fifty+and+one";
f
	ft_strcapitalize(mystr);
	printf("%s", mystr);
}*/
