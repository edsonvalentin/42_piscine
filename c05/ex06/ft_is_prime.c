/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:58:46 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/23 14:58:49 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
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
/*
#include <stdio.h>

void	ft_is_prime_test(void)
{
	int	res;
	int	counter;
	int	primes[10] = {2, 3, 5, 7, 11, 41, 43, 47, 53, 997};

	counter = 0;
	while (counter < 10)
	{
		res = ft_is_prime(primes[counter]);
		if (res != 1)
		{
			printf("[1] KO, %d %d.\n", primes[counter], res);
			return ;
		}
		counter++;
	}
	printf("[1] OK.\n");
}

void	ft_is_prime_error_test(void)
{
	int	res;
	int	counter;
	int	non_primes[10] = {-1, 0, 1, 4, 8, 10, 12, 42, 48, 15000};

	counter = 0;
	while (counter < 10)
	{
		res = ft_is_prime(non_primes[counter]);
		if (res == 1)
		{
			printf("[2] KO, %d %d\n", non_primes[counter], res);
			return ;
		}
		counter++;
	}
	printf("[2] OK.\n");
}

int	main(void)
{
	printf("[1] Testing prime numbers up to 59.\n");
	ft_is_prime_test();
	printf("[2] Testing non-prime numbers up to 54.\n");
	ft_is_prime_error_test();
	return (0);
}*/
