/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:59:12 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/23 14:59:16 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
		if (nb % 2 == 0)
			nb++;
	while (ft_is_prime(nb) == 0)
		ft_is_prime(nb += 2);
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
    int num = 2;

    printf("prox primo %d e: %d\n", num, ft_find_next_prime(num));
    return (0);
}*/
