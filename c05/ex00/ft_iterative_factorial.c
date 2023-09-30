/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:55:12 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/23 14:55:21 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}*/
