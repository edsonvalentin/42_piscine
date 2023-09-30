/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:00:55 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/17 13:43:26 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	resul;
	int	rest;

	x = 11;
	y = 2;
	ft_div_mod(x, y, &resul, &rest);
	printf("A divisao entre %d e %d = %d. O resto e: %d \n", x, y, resul, rest);
	return (0);
}*/
