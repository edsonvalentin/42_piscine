/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:02:41 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/17 13:55:37 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 11;
	y = 2;
	printf("A divisao entre %d e %d e'\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Result e': %d. O resto e': %d \n", x, y);
	return (0);
}*/
