/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:27:34 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/16 13:29:22 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_split(int a, int b)
{
	char	numb;

	ft_putchar(numb = a / 10 + '0');
	ft_putchar(numb = a % 10 + '0');
	write(1, " ", 1);
	ft_putchar(numb = b / 10 + '0');
	ft_putchar(numb = b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_split(x, y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
