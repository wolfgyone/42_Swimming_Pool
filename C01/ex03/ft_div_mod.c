/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:51:53 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/02 19:18:36 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{

int		a;
int		b;
int		div;
int		mod;

a=45;
b=7;

ft_div_mod(a, b, &div, &mod);

printf("pointer %p", &div);
printf("pointer %p", &mod);
printf("%d", div);
printf("%d", mod);
}*/
