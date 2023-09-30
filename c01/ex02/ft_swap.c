/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:58:16 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/17 11:29:59 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
 	
	x = 1;
	y = 42;
	printf("1o valor de x: %d e valor de y: %d \n", x, y);
	ft_swap(&x, &y);
	printf("2o valor de x: %d e valor de y: %d ", x, y);
	return (0);
}*/
