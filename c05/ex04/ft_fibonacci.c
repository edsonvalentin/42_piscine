/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:57:33 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/23 14:57:35 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int res;
	int index;

	index = 0;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf ("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf ("%d\n", res);
	return (0);
}*/
