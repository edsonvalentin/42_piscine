/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:08:32 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/16 15:09:57 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[] = {1, 5, 24, 50, 60 };
	int	size = *(&a + 1) - a;
	
	ft_rev_int_tab(a, size);

	return (0);
}*/
