/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:49:27 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/13 15:11:39 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_print_params(int ac, char **av);

int	main(int ac, char **av)
{
	int		count_ac;
	int		j;
	char	*temp;

	count_ac = 1;
	while (count_ac < ac - 1)
	{
		j = count_ac + 1;
		while (av[j])
		{
			if ((ft_strcmp(av[count_ac], av[j])) > 0)
			{
				temp = av[count_ac];
				av[count_ac] = av[j];
				av[j] = temp;
			}
			j++;
		}
		count_ac++;
	}
	ft_print_params (ac, av);
	return (0);
}

void	ft_print_params(int ac, char **av)
{
	int	count_ac;
	int	i;

	count_ac = 1;
	while (count_ac < ac)
	{
		i = 0;
		while (av[count_ac][i])
		{
			write(1, &av[count_ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count_ac++;
	}
}

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
