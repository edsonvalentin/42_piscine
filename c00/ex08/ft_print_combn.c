/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:51:28 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/16 13:32:46 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char v[], int n, int vmax)
{
	int	pcount;

	pcount = 0;
	if (v[0] == vmax)
	{
		while (pcount < n)
			ft_putchar(v[pcount++]);
		ft_putchar('\n');
		return ;
	}
	while (pcount < n)
		ft_putchar(v[pcount++]);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_increment_vetor(char v[], int n, char vmax[])
{
	int	position;
	int	value;

	while (v[0] != vmax[0])
	{
		position = n - 1;
		while (v[position] == vmax[position])
			--position;
		value = ++(v[position]);
		while (position < n)
			v[++position] = ++value;
		ft_print_numbers(v, n, vmax[0]);
	}
}

void	ft_print_combn(int qnum)
{
	char	v1[10];
	char	v2[10];
	int		c;

	c = 0;
	if (qnum <= 0 || qnum > 10)
		return ;
	while (c < qnum)
	{
		v1[c] = c + 48;
		v2[c] = c + (10 - qnum) + 48;
		c++;
	}
	ft_print_numbers(v1, qnum, v2[0]);
	ft_increment_vetor(v1, qnum, v2);
}
/*
int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
